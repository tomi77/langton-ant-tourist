//---------------------------------------------------------------------------

#ifndef AntFormH
#define AntFormH
//---------------------------------------------------------------------------
#include <fstream.h>
#include "Chromosom.h"
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmAnt : public TForm
{
__published:	// IDE-managed Components
    TMainMenu *MainMenu;
    TMenuItem *mnuFile;
    TMenuItem *mnuOpenWorld;
    TMenuItem *N1;
    TMenuItem *mnuExit;
    TOpenDialog *odlgOpenWorld;
    TColorDialog *cdlgColors;
    TMenuItem *mnuEdit;
    TMenuItem *mnuOptions;
    TPanel *Panel;
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TPaintBox *pbxWorld;
    TButton *btnStart;
    TButton *btnInitialize;
    TEdit *edtMinSumOccupyCells;
    TEdit *edtMaxSumOccupyCells;
    TEdit *edtAvgSumOccupyCells;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TProgressBar *pgbPopulationCounter;
    TMenuItem *mnuResult;
    void __fastcall mnuOpenWorldClick(TObject *Sender);
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall FormPaint(TObject *Sender);
    void __fastcall mnuOptionsClick(TObject *Sender);
    void __fastcall btnStartClick(TObject *Sender);
    void __fastcall btnInitializeClick(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall mnuExitClick(TObject *Sender);
    void __fastcall mnuResultClick(TObject *Sender);
private:	// User declarations
    int SizeX, SizeY;           //
    int WorldSize;              // rozmiar �wiata
    int **World;                // �wiat mr�wki
    int **WorldCopy;            // �wiat mr�wki - kopia
    int CellSize;               // rozmiar kom�rki
    TColor Colors[10];          // tablica kolor�w
    int PopulationSize;         // wielko�� populacji
    bool MakeMutation;          // czy robi� mutacj�?
    bool MakeCrossover;         // czy robi� krzy�owanie?
    float CrossoverProbability; // prawdopodobie�stwo krzy�owania
    float MutationProbability;  // prawdopodobie�stwo mutacji
    int Locus1;                 // punkt krzy�owania pierwszy
    int Locus2;                 // punkt krzy�owania drugi
    int NumberOfIterations;     // liczba iteracji
    int NumberOfSteps;          // ilo�� zaliczonych p�l
    int NumberOfCrossoverPoints;// ilo�� punkt�w krzy�owania
    int SelectionMethod;        // metoda selekcji
    TChromosom *Chromosomy;     // tablica chromosom�w
    TChromosom BestAnt;         // najlepsza mr�wka
    int AntPosX, AntPosY;       // pozycja
    int Turn;                   // zwrot

    void MoveAnt(int i);        // procedura ruchu mr�wki
    void CopyNewWorld();
    int AddSumOccupyCells(int ** OccupyCells);  // funkcja przystosowania
    void RouletteWheelSelection(int Sum, int *SumFromCell);
    void Selection(int *SumFromCell);
    void InitializeWorld(int ** OccupyCells);
public:		// User declarations
    __fastcall TfrmAnt(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmAnt *frmAnt;
//---------------------------------------------------------------------------
#endif
