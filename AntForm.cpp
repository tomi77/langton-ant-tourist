//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AntForm.h"
#include "OptionsForm.h"
#include "ResultForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

// definicje zwrotów
#define NONE    0
#define UP      0
#define RIGHT   1
#define DOWN    2
#define LEFT    3
TfrmAnt *frmAnt;
//---------------------------------------------------------------------------
__fastcall TfrmAnt::TfrmAnt(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnt::mnuExitClick(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnt::FormCreate(TObject *Sender)
{
    int i, j;

    SizeX = Width - pbxWorld->Width;
    SizeY = Height - pbxWorld->Height;

    WorldSize = 31;
    World = new int *[WorldSize];
    WorldCopy = new int *[WorldSize];
    for(i = 0; i < WorldSize; i++)
    {
        World[i] = new int[WorldSize];
        WorldCopy[i] = new int[WorldSize];
        for(j = 0; j < WorldSize; j++)
        {
            World[i][j] = 1;
            WorldCopy[i][j] = 1;
        }
    }
    Colors[0] = TColor(255 * 255 * 0   + 255 * 248 + 255);
    Colors[1] = TColor(255 * 255 * 120 + 255 * 69  + 153);
    Colors[2] = TColor(255 * 255 * 194 + 255 * 194 + 194);
    Colors[3] = TColor(255 * 255 * 25  + 255 * 43  + 220);
    Colors[4] = TColor(255 * 255 * 64  + 255 * 146 + 0);
    Colors[5] = TColor(255 * 255 * 225 + 255 * 143 + 0);
    Colors[6] = TColor(255 * 255 * 143 + 255 * 200 + 246);
    Colors[7] = TColor(255 * 255 * 0   + 255 * 0   + 0);
    Colors[8] = TColor(255 * 255 * 215 + 255 * 179 + 187);
    Colors[9] = TColor(255 * 255 * 125 + 255 * 220 + 182);
    CellSize = 11;
    PopulationSize = 50;
    MakeCrossover = true;
    MakeMutation = true;
    NumberOfIterations = 1000;
    NumberOfSteps = 961;
    NumberOfCrossoverPoints = 1;
    SelectionMethod = 1;
    CrossoverProbability = 0.7;
    MutationProbability = 0.03;
    Locus1 = 0;
    Locus2 = 0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnt::FormClose(TObject *Sender, TCloseAction &Action)
{
    int i;

    for(i = 0; i < WorldSize; i++)
    {
        delete[] World[i];
        delete[] WorldCopy[i];
    }
    delete[] World;
    delete[] WorldCopy;
    delete[] Chromosomy;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnt::FormPaint(TObject *Sender)
{
    int i, j, posx, posy;

    Width = SizeX + CellSize * WorldSize;
    Height = SizeY + CellSize * WorldSize;
    pbxWorld->Update();
    for(i = 0; i < WorldSize; i++)
    {
        for(j = 0; j < WorldSize; j++)
        {
            posx = i * CellSize;
            posy = j * CellSize;
            pbxWorld->Canvas->Brush->Color =
                Colors[World[WorldSize - i - 1][WorldSize - j - 1] - 1];
            pbxWorld->Canvas->FillRect(TRect(posx, posy,
                posx + CellSize - 1, posy + CellSize - 1));
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnt::mnuOpenWorldClick(TObject *Sender)
{
    String filename;
    fstream file;
    int i, j;

    odlgOpenWorld->Execute();
    filename = odlgOpenWorld->FileName;
    file.open(filename.c_str());
    for(i = 0; i < WorldSize; i++)
    {
        for(j = 0; j < WorldSize; j++)
        {
            file >> World[i][j];
            WorldCopy[i][j] = World[i][j];
        }
    }
    file.close();
    btnInitialize->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnt::mnuOptionsClick(TObject *Sender)
{
    int i;

    frmOptions->edtCellSize->Text = IntToStr(CellSize);
    for(i = 0; i < 10; i++)
    {
        frmOptions->Colors[i] = Colors[i];
    }
    frmOptions->edtPopulationSize->Text = IntToStr(PopulationSize);
    frmOptions->cbxCrossover->Checked = MakeCrossover;
    frmOptions->cbxMutations->Checked = MakeMutation;
    frmOptions->edtNumberOfIterations->Text = IntToStr(NumberOfIterations);
    frmOptions->sedtNumberOfSteps->Value = NumberOfSteps;
    frmOptions->rgrpNumberOfCrossoverPoints->ItemIndex =
        NumberOfCrossoverPoints - 1;
    frmOptions->edtCrossoverProbability->Text =
        FloatToStrF(CrossoverProbability, ffFixed, 2, 3);
    frmOptions->edtMutationProbability->Text =
        FloatToStrF(MutationProbability, ffFixed, 2, 3);
    frmOptions->cboLocus1->ItemIndex = Locus1;
    frmOptions->cboLocus2->ItemIndex = Locus2;
    frmOptions->rgrpSelectionMethod->ItemIndex = SelectionMethod;

    frmOptions->ShowModal();

    CellSize = StrToInt(frmOptions->edtCellSize->Text);
    for(i = 0; i < 10; i++)
    {
        Colors[i] = frmOptions->Colors[i];
    }
    PopulationSize = StrToInt(frmOptions->edtPopulationSize->Text);
    MakeCrossover = frmOptions->cbxCrossover->Checked;
    MakeMutation = frmOptions->cbxMutations->Checked;
    NumberOfIterations = StrToInt(frmOptions->edtNumberOfIterations->Text);
    NumberOfSteps = frmOptions->sedtNumberOfSteps->Value;
    NumberOfCrossoverPoints =
        frmOptions->rgrpNumberOfCrossoverPoints->ItemIndex + 1;
    CrossoverProbability = StrToFloat(frmOptions->edtCrossoverProbability->Text);
    MutationProbability = StrToFloat(frmOptions->edtMutationProbability->Text);
    Locus1 = frmOptions->cboLocus1->ItemIndex;
    Locus2 = frmOptions->cboLocus2->ItemIndex;
    SelectionMethod = frmOptions->rgrpSelectionMethod->ItemIndex;
    Repaint();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnt::btnInitializeClick(TObject *Sender)
{
    int i;

    randomize();
    Chromosomy = new TChromosom[PopulationSize];
    for(i = 0; i < PopulationSize; i++)
    {
        Chromosomy[i].Initialize();
    }
    btnStart->Enabled = true;
    edtMinSumOccupyCells->Text = "0";
    edtMaxSumOccupyCells->Text = "0";
    edtAvgSumOccupyCells->Text = "0.0";
    InitializeWorld(NULL);
    mnuResult->Enabled = false;
    Repaint();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnt::btnStartClick(TObject *Sender)
{
    int PopulationCounter, step, Locus;
    int i, j, k, Sum;
    int **OccupyCells;
    int *SumOccupyCells;
    int AntNumber, MaxSumOccupyCells, MinSumOccupyCells;
    double AvgSumOccupyCells;

    OccupyCells = new int *[WorldSize];
    for(i = 0; i < WorldSize; i++)
    {
        OccupyCells[i] = new int[WorldSize];
    }
    SumOccupyCells = new int[PopulationSize];
    PopulationCounter = 0;
    pgbPopulationCounter->Position = 0;
    pgbPopulationCounter->Min = 0;
    pgbPopulationCounter->Max = NumberOfIterations;
    do
    {
        MaxSumOccupyCells = 0;
        MinSumOccupyCells = WorldSize * WorldSize;
        Sum = 0.0;
        for(i = 0; i < PopulationSize; i++)
        {
            InitializeWorld(OccupyCells);
            for(step = 0; step < 1000; step++)
            {
                MoveAnt(i);
                OccupyCells[AntPosY][AntPosX]++;
            }
            SumOccupyCells[i] = AddSumOccupyCells(OccupyCells);
            if(SumOccupyCells[i] < MinSumOccupyCells)
            {
                MinSumOccupyCells = SumOccupyCells[i];
            }
            if(SumOccupyCells[i] > MaxSumOccupyCells)
            {
                MaxSumOccupyCells = SumOccupyCells[i];
                AntNumber = i;
                BestAnt = Chromosomy[AntNumber];
            }
            Sum += SumOccupyCells[i];
        }
        AvgSumOccupyCells = 1.0 * Sum / PopulationSize;
        edtMinSumOccupyCells->Text = IntToStr(MinSumOccupyCells);
        edtMaxSumOccupyCells->Text = IntToStr(MaxSumOccupyCells);
        edtAvgSumOccupyCells->Text = FloatToStr(AvgSumOccupyCells);
        if(MaxSumOccupyCells < NumberOfSteps)
        {
            switch(SelectionMethod)
            {
                case 0:     // metoda ko³a ruletki
                    RouletteWheelSelection(Sum, SumOccupyCells);
                    break;
                case 1:     // metoda turniejowa
                    Selection(SumOccupyCells);
                    break;
            }
            if(MakeCrossover)
            {
                for(i = 0;
                    i < ceil(0.5 * PopulationSize * CrossoverProbability) * 2;
                    i += 2)
                {
                    switch(NumberOfCrossoverPoints)
                    {
                        case 1:
                            Chromosomy[i].Crossover(Chromosomy[i + 1], Locus1);
                            break;
                        case 2:
                            Chromosomy[i].Crossover(Chromosomy[i + 1], Locus1,
                                Locus2);
                            break;
                    }
                }
            }
            if(MakeMutation)
            {
                for(i = 0; i < PopulationSize; i++)
                {
                    for(j = 0; j < 20; j++)
                    {
                        if(1.0 * rand() / RAND_MAX < MutationProbability)
                        {
                            Chromosomy[i].Mutation(j);
                        }
                    }
                }
            }
        }
        PopulationCounter++;
        pgbPopulationCounter->Position++;
        Update();
        if(PopulationCounter % 100 == 0)
        {
            mnuResultClick(Sender);
        }
    } while ((MaxSumOccupyCells <= NumberOfSteps) &&
        (PopulationCounter <= NumberOfIterations));
    InitializeWorld(OccupyCells);
    Chromosomy[AntNumber] = BestAnt;
    for(step = 0; step < 1000; step++)
    {
        MoveAnt(AntNumber);
    }
    Repaint();
    mnuResult->Enabled = true;
    for(i = 0; i < WorldSize; i++)
    {
        delete[] OccupyCells[i];
    }
    delete[] OccupyCells;
    delete[] SumOccupyCells;
}
//---------------------------------------------------------------------------

const int PositionXAdd[5] = {0, 1, 0, -1};  // do góry, w prawo, w dó³, w lewo
const int PositionYAdd[5] = {1, 0, -1, 0};
const int DirectionChange[8] = {NONE, UP,   RIGHT, DOWN, LEFT, NONE, NONE, NONE};
const int TurnChange[8] =      {NONE, NONE, NONE,  NONE, NONE, LEFT, DOWN, RIGHT};

void TfrmAnt::MoveAnt(int i)
{
    int OldPosX, OldPosY, Direction, Gene;

    OldPosX = AntPosX;
    OldPosY = AntPosY;
    Gene = Chromosomy[i].GetGenRuch(World[AntPosY][AntPosX] - 1);
    if(Gene > 1 && Gene < 6)
    {
        Direction = (Turn + DirectionChange[Gene - 1]) % 4;
        AntPosX = (AntPosX + PositionXAdd[Direction] + WorldSize) % WorldSize;
        AntPosY = (AntPosY + PositionYAdd[Direction] + WorldSize) % WorldSize;
    }
    else if(Gene > 5)
    {
        Turn = (Turn + TurnChange[Gene - 1]) % 4;
    }
    World[OldPosY][OldPosX] =
        Chromosomy[i].GetGenKolor(World[OldPosY][OldPosX] - 1);
}
//---------------------------------------------------------------------------

void TfrmAnt::CopyNewWorld()
{
    int i, j;

    for(i = 0; i < WorldSize; i++)
    {
        for(j = 0; j < WorldSize; j++)
        {
            World[i][j] = WorldCopy[i][j];
        }
    }
}
//---------------------------------------------------------------------------

int TfrmAnt::AddSumOccupyCells(int ** OccupyCells)
{
    int i, j, sum;

    sum = 0;
    for(i = 0; i < WorldSize; i++)
    {
        for(j = 0; j < WorldSize; j++)
        {
            if(OccupyCells[i][j] > 0)
            {
                sum++;
            }
        }
    }
    return sum;
}
//---------------------------------------------------------------------------

void TfrmAnt::RouletteWheelSelection(int Sum, int *SumFromCell)
{
    TChromosom *Parents;
    int i, j;
    double* PrecentageSum;
    double Lot;

    Parents = new TChromosom[PopulationSize];
    PrecentageSum = new double[PopulationSize];
    for(i = 0; i < PopulationSize; i++)
    {
        Parents[i].Initialize();
        PrecentageSum[i] = 1.0 * SumFromCell[i] / Sum;
    }
    for(i = 0; i < PopulationSize; i++)
    {
        Lot = 1.0 * rand() / RAND_MAX;
        j = 0;
        do
        {
            Lot -= PrecentageSum[j++];
        } while (Lot >= 0.0 && j < PopulationSize);
        Parents[i] = Chromosomy[j - 1];
    }
    delete[] PrecentageSum;
    delete[] Chromosomy;
    Chromosomy = Parents;
}
//---------------------------------------------------------------------------

void TfrmAnt::Selection(int *SumFromCell)
{
    //selekcja metod¹ turniejow¹
    TChromosom *Parents;
    int i, j, k, win;

    Parents = new TChromosom[PopulationSize];
    for(i = 0; i < PopulationSize; i++)
    {
        j = random(PopulationSize);
        k = random(PopulationSize);
        if(SumFromCell[j] < SumFromCell[k])
        {
            win = k;
        }
        else
        {
            win = j;
        }
        Parents[i].Initialize();
        Parents[i] = Chromosomy[win];
    }
    delete[] Chromosomy;
    Chromosomy = Parents;
}
//---------------------------------------------------------------------------

void TfrmAnt::InitializeWorld(int ** OccupyCells)
{
    int i, j;

    AntPosX = (WorldSize - 1) / 2;
    AntPosY = (WorldSize - 1) / 2;
    Turn = UP;
    CopyNewWorld();
    if(OccupyCells != NULL)
    {
        for(i = 0; i < WorldSize; i++)
        {
            for(j = 0; j < WorldSize; j++)
            {
                OccupyCells[i][j] = 0;
            }
        }
        OccupyCells[AntPosY][AntPosX]++;
    }
}
void __fastcall TfrmAnt::mnuResultClick(TObject *Sender)
{
    int i;

    frmResult->shpWorld1->Brush->Color = Colors[0];
    frmResult->shpWorld2->Brush->Color = Colors[1];
    frmResult->shpWorld3->Brush->Color = Colors[2];
    frmResult->shpWorld4->Brush->Color = Colors[3];
    frmResult->shpWorld5->Brush->Color = Colors[4];
    frmResult->shpWorld6->Brush->Color = Colors[5];
    frmResult->shpWorld7->Brush->Color = Colors[6];
    frmResult->shpWorld8->Brush->Color = Colors[7];
    frmResult->shpWorld9->Brush->Color = Colors[8];
    frmResult->shpWorld10->Brush->Color = Colors[9];
    for(i = 0; i < 10; i++)
    {
        frmResult->Gene[i] = BestAnt.GetGenRuch(i);
    }
    frmResult->shpGene11->Brush->Color = Colors[BestAnt.GetGenKolor(0) - 1];
    frmResult->shpGene11->Hint = IntToStr(BestAnt.GetGenKolor(0));
    frmResult->shpGene12->Brush->Color = Colors[BestAnt.GetGenKolor(1) - 1];
    frmResult->shpGene12->Hint = IntToStr(BestAnt.GetGenKolor(1));
    frmResult->shpGene13->Brush->Color = Colors[BestAnt.GetGenKolor(2) - 1];
    frmResult->shpGene13->Hint = IntToStr(BestAnt.GetGenKolor(2));
    frmResult->shpGene14->Brush->Color = Colors[BestAnt.GetGenKolor(3) - 1];
    frmResult->shpGene14->Hint = IntToStr(BestAnt.GetGenKolor(3));
    frmResult->shpGene15->Brush->Color = Colors[BestAnt.GetGenKolor(4) - 1];
    frmResult->shpGene15->Hint = IntToStr(BestAnt.GetGenKolor(4));
    frmResult->shpGene16->Brush->Color = Colors[BestAnt.GetGenKolor(5) - 1];
    frmResult->shpGene16->Hint = IntToStr(BestAnt.GetGenKolor(5));
    frmResult->shpGene17->Brush->Color = Colors[BestAnt.GetGenKolor(6) - 1];
    frmResult->shpGene17->Hint = IntToStr(BestAnt.GetGenKolor(6));
    frmResult->shpGene18->Brush->Color = Colors[BestAnt.GetGenKolor(7) - 1];
    frmResult->shpGene18->Hint = IntToStr(BestAnt.GetGenKolor(7));
    frmResult->shpGene19->Brush->Color = Colors[BestAnt.GetGenKolor(8) - 1];
    frmResult->shpGene19->Hint = IntToStr(BestAnt.GetGenKolor(8));
    frmResult->shpGene20->Brush->Color = Colors[BestAnt.GetGenKolor(9) - 1];
    frmResult->shpGene20->Hint = IntToStr(BestAnt.GetGenKolor(9));
    frmResult->ShowModal();
}
//---------------------------------------------------------------------------

