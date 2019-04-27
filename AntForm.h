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
    int WorldSize;              // rozmiar œwiata
    int **World;                // œwiat mrówki
    int **WorldCopy;            // œwiat mrówki - kopia
    int CellSize;               // rozmiar komórki
    TColor Colors[10];          // tablica kolorów
    int PopulationSize;         // wielkoœæ populacji
    bool MakeMutation;          // czy robiæ mutacjê?
    bool MakeCrossover;         // czy robiæ krzy¿owanie?
    float CrossoverProbability; // prawdopodobieñstwo krzy¿owania
    float MutationProbability;  // prawdopodobieñstwo mutacji
    int Locus1;                 // punkt krzy¿owania pierwszy
    int Locus2;                 // punkt krzy¿owania drugi
    int NumberOfIterations;     // liczba iteracji
    int NumberOfSteps;          // iloœæ zaliczonych pól
    int NumberOfCrossoverPoints;// iloœæ punktów krzy¿owania
    int SelectionMethod;        // metoda selekcji
    TChromosom *Chromosomy;     // tablica chromosomów
    TChromosom BestAnt;         // najlepsza mrówka
    int AntPosX, AntPosY;       // pozycja
    int Turn;                   // zwrot

    void MoveAnt(int i);        // procedura ruchu mrówki
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
