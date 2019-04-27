//---------------------------------------------------------------------------

#ifndef ResultFormH
#define ResultFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmResult : public TForm
{
__published:	// IDE-managed Components
    TShape *shpGene11;
    TShape *shpGene12;
    TShape *shpGene13;
    TShape *shpGene14;
    TShape *shpGene15;
    TShape *shpGene16;
    TShape *shpGene17;
    TShape *shpGene18;
    TShape *shpGene19;
    TShape *shpGene20;
    TButton *btnOk;
    TImage *imgGene1;
    TImage *imgGene2;
    TImage *imgGene3;
    TImage *imgGene4;
    TImage *imgGene5;
    TImage *imgGene6;
    TImage *imgGene7;
    TImage *imgGene8;
    TImage *imgGene9;
    TImage *imgGene10;
    TLabel *Label12;
    TLabel *Label13;
    TImage *Image1;
    TImage *Image2;
    TImage *Image3;
    TImage *Image4;
    TImage *Image5;
    TImage *Image6;
    TImage *Image7;
    TImage *Image8;
    TShape *shpWorld1;
    TShape *shpWorld2;
    TShape *shpWorld3;
    TShape *shpWorld4;
    TShape *shpWorld5;
    TShape *shpWorld6;
    TShape *shpWorld7;
    TShape *shpWorld8;
    TShape *shpWorld9;
    TShape *shpWorld10;
    TLabel *Label1;
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
    int Gene[10];
    __fastcall TfrmResult(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmResult *frmResult;
//---------------------------------------------------------------------------
#endif
