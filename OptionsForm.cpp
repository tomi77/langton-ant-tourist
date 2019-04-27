//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "OptionsForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CSPIN"
#pragma resource "*.dfm"
TfrmOptions *frmOptions;
//---------------------------------------------------------------------------
__fastcall TfrmOptions::TfrmOptions(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmOptions::shpColor1MouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
    cdlgColors->Execute();
    shpColor1->Brush->Color = cdlgColors->Color;
}
//---------------------------------------------------------------------------
void __fastcall TfrmOptions::shpColor2MouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
    cdlgColors->Execute();
    shpColor2->Brush->Color = cdlgColors->Color;
}
//---------------------------------------------------------------------------
void __fastcall TfrmOptions::shpColor3MouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
    cdlgColors->Execute();
    shpColor3->Brush->Color = cdlgColors->Color;    
}
//---------------------------------------------------------------------------
void __fastcall TfrmOptions::shpColor4MouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
    cdlgColors->Execute();
    shpColor4->Brush->Color = cdlgColors->Color;    
}
//---------------------------------------------------------------------------
void __fastcall TfrmOptions::shpColor5MouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
    cdlgColors->Execute();
    shpColor5->Brush->Color = cdlgColors->Color;    
}
//---------------------------------------------------------------------------
void __fastcall TfrmOptions::shpColor6MouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
    cdlgColors->Execute();
    shpColor6->Brush->Color = cdlgColors->Color;    
}
//---------------------------------------------------------------------------
void __fastcall TfrmOptions::shpColor7MouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
    cdlgColors->Execute();
    shpColor7->Brush->Color = cdlgColors->Color;    
}
//---------------------------------------------------------------------------
void __fastcall TfrmOptions::shpColor8ContextPopup(TObject *Sender,
      TPoint &MousePos, bool &Handled)
{
    cdlgColors->Execute();
    shpColor8->Brush->Color = cdlgColors->Color;    
}
//---------------------------------------------------------------------------
void __fastcall TfrmOptions::shpColor9MouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
    cdlgColors->Execute();
    shpColor9->Brush->Color = cdlgColors->Color;    
}
//---------------------------------------------------------------------------
void __fastcall TfrmOptions::shpColor10MouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
    cdlgColors->Execute();
    shpColor10->Brush->Color = cdlgColors->Color;    
}
//---------------------------------------------------------------------------
void __fastcall TfrmOptions::FormActivate(TObject *Sender)
{
    shpColor1->Brush->Color = Colors[0];
    shpColor2->Brush->Color = Colors[1];
    shpColor3->Brush->Color = Colors[2];
    shpColor4->Brush->Color = Colors[3];
    shpColor5->Brush->Color = Colors[4];
    shpColor6->Brush->Color = Colors[5];
    shpColor7->Brush->Color = Colors[6];
    shpColor8->Brush->Color = Colors[7];
    shpColor9->Brush->Color = Colors[8];
    shpColor10->Brush->Color = Colors[9];
    cboLocus1->ItemIndex = 0;
    cboLocus2->ItemIndex = 0;
}
//---------------------------------------------------------------------------
void __fastcall TfrmOptions::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    Colors[0] = shpColor1->Brush->Color;
    Colors[1] = shpColor2->Brush->Color;
    Colors[2] = shpColor3->Brush->Color;
    Colors[3] = shpColor4->Brush->Color;
    Colors[4] = shpColor5->Brush->Color;
    Colors[5] = shpColor6->Brush->Color;
    Colors[6] = shpColor7->Brush->Color;
    Colors[7] = shpColor8->Brush->Color;
    Colors[8] = shpColor9->Brush->Color;
    Colors[9] = shpColor10->Brush->Color;
}
//---------------------------------------------------------------------------
void __fastcall TfrmOptions::cbxCrossoverClick(TObject *Sender)
{
    rgrpNumberOfCrossoverPoints->Enabled = cbxCrossover->Checked;
    edtCrossoverProbability->Enabled = cbxCrossover->Checked;
    cboLocus1->Enabled = cbxCrossover->Checked;
    cboLocus2->Enabled = cbxCrossover->Checked;
}
//---------------------------------------------------------------------------
void __fastcall TfrmOptions::cbxMutationsClick(TObject *Sender)
{
    edtMutationProbability->Enabled = cbxMutations->Checked;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmOptions::rgrpNumberOfCrossoverPointsClick(TObject *Sender)
{
    if(rgrpNumberOfCrossoverPoints->ItemIndex == 0)
    {
        cboLocus2->Enabled = false;
        cboLocus1->Items->Add("10");
        cboLocus1->Items->Add("11");
        cboLocus1->Items->Add("12");
        cboLocus1->Items->Add("13");
        cboLocus1->Items->Add("14");
        cboLocus1->Items->Add("15");
        cboLocus1->Items->Add("16");
        cboLocus1->Items->Add("17");
        cboLocus1->Items->Add("18");
        cboLocus1->Items->Add("19");
    }
    else
    {
        cboLocus2->Enabled = true;
        cboLocus1->Items->Clear();
        cboLocus1->Items->Add("Losowo");
        cboLocus1->Items->Add("1");
        cboLocus1->Items->Add("2");
        cboLocus1->Items->Add("3");
        cboLocus1->Items->Add("4");
        cboLocus1->Items->Add("5");
        cboLocus1->Items->Add("6");
        cboLocus1->Items->Add("7");
        cboLocus1->Items->Add("8");
        cboLocus1->Items->Add("9");
    }
}
//---------------------------------------------------------------------------



