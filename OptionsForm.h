//---------------------------------------------------------------------------

#ifndef OptionsFormH
#define OptionsFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Tabnotbk.hpp>
#include <Grids.hpp>
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
#include "CSPIN.h"
//---------------------------------------------------------------------------
class TfrmOptions : public TForm
{
__published:	// IDE-managed Components
    TButton *btnOk;
    TTabbedNotebook *TabbedNotebook1;
    TLabel *Label1;
    TEdit *edtPopulationSize;
    TCheckBox *cbxCrossover;
    TCheckBox *cbxMutations;
    TShape *Shape6;
    TShape *Shape7;
    TShape *Shape8;
    TShape *Shape9;
    TShape *Shape10;
    TColorDialog *cdlgColors;
    TRadioGroup *rgrpNumberOfCrossoverPoints;
    TComboBox *cboLocus1;
    TLabel *Label3;
    TLabel *Label5;
    TEdit *edtMutationProbability;
    TLabel *Label6;
    TEdit *edtCrossoverProbability;
    TLabel *Label7;
    TEdit *edtCellSize;
    TComboBox *cboLocus2;
    TLabel *Label8;
    TGroupBox *GroupBox1;
    TLabel *Label4;
    TEdit *edtNumberOfIterations;
    TLabel *Label9;
    TLabel *Label10;
    TCSpinEdit *sedtNumberOfSteps;
    TRadioGroup *rgrpSelectionMethod;
    TGroupBox *GroupBox2;
    TShape *shpColor6;
    TShape *shpColor7;
    TShape *shpColor8;
    TShape *shpColor9;
    TShape *shpColor10;
    TShape *shpColor5;
    TShape *shpColor4;
    TShape *shpColor3;
    TShape *shpColor2;
    TShape *shpColor1;
    TLabel *Label2;
    TLabel *Label11;
    TLabel *Label12;
    TLabel *Label13;
    void __fastcall shpColor1MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall shpColor2MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall shpColor3MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall shpColor4MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall shpColor5MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall shpColor6MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall shpColor7MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall shpColor8ContextPopup(TObject *Sender,
          TPoint &MousePos, bool &Handled);
    void __fastcall shpColor9MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall shpColor10MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall FormActivate(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall cbxCrossoverClick(TObject *Sender);
    void __fastcall cbxMutationsClick(TObject *Sender);
    void __fastcall rgrpNumberOfCrossoverPointsClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmOptions(TComponent* Owner);
    TColor Colors[10];  // tablica kolorów
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmOptions *frmOptions;
//---------------------------------------------------------------------------
#endif
