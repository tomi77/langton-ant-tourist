//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ResultForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmResult *frmResult;
//---------------------------------------------------------------------------
__fastcall TfrmResult::TfrmResult(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmResult::FormCreate(TObject *Sender)
{
    Image1->Picture->LoadFromFile("gene0.wmf");
    Image2->Picture->LoadFromFile("gene1.wmf");
    Image3->Picture->LoadFromFile("gene2.wmf");
    Image4->Picture->LoadFromFile("gene3.wmf");
    Image5->Picture->LoadFromFile("gene4.wmf");
    Image6->Picture->LoadFromFile("gene5.wmf");
    Image7->Picture->LoadFromFile("gene6.wmf");
    Image8->Picture->LoadFromFile("gene7.wmf");
}
//---------------------------------------------------------------------------

void __fastcall TfrmResult::FormActivate(TObject *Sender)
{
    switch(Gene[0])
    {
        case 1:
            imgGene1->Picture = Image1->Picture;
            imgGene1->Hint = "Pozostanie w miejscu (1)";
            break;
        case 2:
            imgGene1->Picture = Image2->Picture;
            imgGene1->Hint = "Krok w przód (2)";
            break;
        case 3:
            imgGene1->Picture = Image3->Picture;
            imgGene1->Hint = "Krok w prawo (3)";
            break;
        case 4:
            imgGene1->Picture = Image4->Picture;
            imgGene1->Hint = "Krok wstecz (4)";
            break;
        case 5:
            imgGene1->Picture = Image5->Picture;
            imgGene1->Hint = "Krok w lewo (5)";
            break;
        case 6:
            imgGene1->Picture = Image6->Picture;
            imgGene1->Hint = "Zwrot w lewo (6)";
            break;
        case 7:
            imgGene1->Picture = Image7->Picture;
            imgGene1->Hint = "Zwrot w ty³ (7)";
            break;
        case 8:
            imgGene1->Picture = Image8->Picture;
            imgGene1->Hint = "Zwrot w prawo (8)";
            break;
    }
    switch(Gene[1])
    {
        case 1:
            imgGene2->Picture = Image1->Picture;
            imgGene2->Hint = "Pozostanie w miejscu (1)";
            break;
        case 2:
            imgGene2->Picture = Image2->Picture;
            imgGene2->Hint = "Krok w przód (2)";
            break;
        case 3:
            imgGene2->Picture = Image3->Picture;
            imgGene2->Hint = "Krok w prawo (3)";
            break;
        case 4:
            imgGene2->Picture = Image4->Picture;
            imgGene2->Hint = "Krok wstecz (4)";
            break;
        case 5:
            imgGene2->Picture = Image5->Picture;
            imgGene2->Hint = "Krok w lewo (5)";
            break;
        case 6:
            imgGene2->Picture = Image6->Picture;
            imgGene2->Hint = "Zwrot w lewo (6)";
            break;
        case 7:
            imgGene2->Picture = Image7->Picture;
            imgGene2->Hint = "Zwrot w ty³ (7)";
            break;
        case 8:
            imgGene2->Picture = Image8->Picture;
            imgGene2->Hint = "Zwrot w prawo (8)";
            break;
    }
    switch(Gene[2])
    {
        case 1:
            imgGene3->Picture = Image1->Picture;
            imgGene3->Hint = "Pozostanie w miejscu (1)";
            break;
        case 2:
            imgGene3->Picture = Image2->Picture;
            imgGene3->Hint = "Krok w przód (2)";
            break;
        case 3:
            imgGene3->Picture = Image3->Picture;
            imgGene3->Hint = "Krok w prawo (3)";
            break;
        case 4:
            imgGene3->Picture = Image4->Picture;
            imgGene3->Hint = "Krok wstecz (4)";
            break;
        case 5:
            imgGene3->Picture = Image5->Picture;
            imgGene3->Hint = "Krok w lewo (5)";
            break;
        case 6:
            imgGene3->Picture = Image6->Picture;
            imgGene3->Hint = "Zwrot w lewo (6)";
            break;
        case 7:
            imgGene3->Picture = Image7->Picture;
            imgGene3->Hint = "Zwrot w ty³ (7)";
            break;
        case 8:
            imgGene3->Picture = Image8->Picture;
            imgGene3->Hint = "Zwrot w prawo (8)";
            break;
    }
    switch(Gene[3])
    {
        case 1:
            imgGene4->Picture = Image1->Picture;
            imgGene4->Hint = "Pozostanie w miejscu (1)";
            break;
        case 2:
            imgGene4->Picture = Image2->Picture;
            imgGene4->Hint = "Krok w przód (2)";
            break;
        case 3:
            imgGene4->Picture = Image3->Picture;
            imgGene4->Hint = "Krok w prawo (3)";
            break;
        case 4:
            imgGene4->Picture = Image4->Picture;
            imgGene4->Hint = "Krok wstecz (4)";
            break;
        case 5:
            imgGene4->Picture = Image5->Picture;
            imgGene4->Hint = "Krok w lewo (5)";
            break;
        case 6:
            imgGene4->Picture = Image6->Picture;
            imgGene4->Hint = "Zwrot w lewo (6)";
            break;
        case 7:
            imgGene4->Picture = Image7->Picture;
            imgGene4->Hint = "Zwrot w ty³ (7)";
            break;
        case 8:
            imgGene4->Picture = Image8->Picture;
            imgGene4->Hint = "Zwrot w prawo (8)";
            break;
    }
    switch(Gene[4])
    {
        case 1:
            imgGene5->Picture = Image1->Picture;
            imgGene5->Hint = "Pozostanie w miejscu (1)";
            break;
        case 2:
            imgGene5->Picture = Image2->Picture;
            imgGene5->Hint = "Krok w przód (2)";
            break;
        case 3:
            imgGene5->Picture = Image3->Picture;
            imgGene5->Hint = "Krok w prawo (3)";
            break;
        case 4:
            imgGene5->Picture = Image4->Picture;
            imgGene5->Hint = "Krok wstecz (4)";
            break;
        case 5:
            imgGene5->Picture = Image5->Picture;
            imgGene5->Hint = "Krok w lewo (5)";
            break;
        case 6:
            imgGene5->Picture = Image6->Picture;
            imgGene5->Hint = "Zwrot w lewo (6)";
            break;
        case 7:
            imgGene5->Picture = Image7->Picture;
            imgGene5->Hint = "Zwrot w ty³ (7)";
            break;
        case 8:
            imgGene5->Picture = Image8->Picture;
            imgGene5->Hint = "Zwrot w prawo (8)";
            break;
    }
    switch(Gene[5])
    {
        case 1:
            imgGene6->Picture = Image1->Picture;
            imgGene6->Hint = "Pozostanie w miejscu (1)";
            break;
        case 2:
            imgGene6->Picture = Image2->Picture;
            imgGene6->Hint = "Krok w przód (2)";
            break;
        case 3:
            imgGene6->Picture = Image3->Picture;
            imgGene6->Hint = "Krok w prawo (3)";
            break;
        case 4:
            imgGene6->Picture = Image4->Picture;
            imgGene6->Hint = "Krok wstecz (4)";
            break;
        case 5:
            imgGene6->Picture = Image5->Picture;
            imgGene6->Hint = "Krok w lewo (5)";
            break;
        case 6:
            imgGene6->Picture = Image6->Picture;
            imgGene6->Hint = "Zwrot w lewo (6)";
            break;
        case 7:
            imgGene6->Picture = Image7->Picture;
            imgGene6->Hint = "Zwrot w ty³ (7)";
            break;
        case 8:
            imgGene6->Picture = Image8->Picture;
            imgGene6->Hint = "Zwrot w prawo (8)";
            break;
    }
    switch(Gene[6])
    {
        case 1:
            imgGene7->Picture = Image1->Picture;
            imgGene7->Hint = "Pozostanie w miejscu (1)";
            break;
        case 2:
            imgGene7->Picture = Image2->Picture;
            imgGene7->Hint = "Krok w przód (2)";
            break;
        case 3:
            imgGene7->Picture = Image3->Picture;
            imgGene7->Hint = "Krok w prawo (3)";
            break;
        case 4:
            imgGene7->Picture = Image4->Picture;
            imgGene7->Hint = "Krok wstecz (4)";
            break;
        case 5:
            imgGene7->Picture = Image5->Picture;
            imgGene7->Hint = "Krok w lewo (5)";
            break;
        case 6:
            imgGene7->Picture = Image6->Picture;
            imgGene7->Hint = "Zwrot w lewo (6)";
            break;
        case 7:
            imgGene7->Picture = Image7->Picture;
            imgGene7->Hint = "Zwrot w ty³ (7)";
            break;
        case 8:
            imgGene7->Picture = Image8->Picture;
            imgGene7->Hint = "Zwrot w prawo (8)";
            break;
    }
    switch(Gene[7])
    {
        case 1:
            imgGene8->Picture = Image1->Picture;
            imgGene8->Hint = "Pozostanie w miejscu (1)";
            break;
        case 2:
            imgGene8->Picture = Image2->Picture;
            imgGene8->Hint = "Krok w przód (2)";
            break;
        case 3:
            imgGene8->Picture = Image3->Picture;
            imgGene8->Hint = "Krok w prawo (3)";
            break;
        case 4:
            imgGene8->Picture = Image4->Picture;
            imgGene8->Hint = "Krok wstecz (4)";
            break;
        case 5:
            imgGene8->Picture = Image5->Picture;
            imgGene8->Hint = "Krok w lewo (5)";
            break;
        case 6:
            imgGene8->Picture = Image6->Picture;
            imgGene8->Hint = "Zwrot w lewo (6)";
            break;
        case 7:
            imgGene8->Picture = Image7->Picture;
            imgGene8->Hint = "Zwrot w ty³ (7)";
            break;
        case 8:
            imgGene8->Picture = Image8->Picture;
            imgGene8->Hint = "Zwrot w prawo (8)";
            break;
    }
    switch(Gene[8])
    {
        case 1:
            imgGene9->Picture = Image1->Picture;
            imgGene9->Hint = "Pozostanie w miejscu (1)";
            break;
        case 2:
            imgGene9->Picture = Image2->Picture;
            imgGene9->Hint = "Krok w przód (2)";
            break;
        case 3:
            imgGene9->Picture = Image3->Picture;
            imgGene9->Hint = "Krok w prawo (3)";
            break;
        case 4:
            imgGene9->Picture = Image4->Picture;
            imgGene9->Hint = "Krok wstecz (4)";
            break;
        case 5:
            imgGene9->Picture = Image5->Picture;
            imgGene9->Hint = "Krok w lewo (5)";
            break;
        case 6:
            imgGene9->Picture = Image6->Picture;
            imgGene9->Hint = "Zwrot w lewo (6)";
            break;
        case 7:
            imgGene9->Picture = Image7->Picture;
            imgGene9->Hint = "Zwrot w ty³ (7)";
            break;
        case 8:
            imgGene9->Picture = Image8->Picture;
            imgGene9->Hint = "Zwrot w prawo (8)";
            break;
    }
    switch(Gene[9])
    {
        case 1:
            imgGene10->Picture = Image1->Picture;
            imgGene10->Hint = "Pozostanie w miejscu (1)";
            break;
        case 2:
            imgGene10->Picture = Image2->Picture;
            imgGene10->Hint = "Krok w przód (2)";
            break;
        case 3:
            imgGene10->Picture = Image3->Picture;
            imgGene10->Hint = "Krok w prawo (3)";
            break;
        case 4:
            imgGene10->Picture = Image4->Picture;
            imgGene10->Hint = "Krok wstecz (4)";
            break;
        case 5:
            imgGene10->Picture = Image5->Picture;
            imgGene10->Hint = "Krok w lewo (5)";
            break;
        case 6:
            imgGene10->Picture = Image6->Picture;
            imgGene10->Hint = "Zwrot w lewo (6)";
            break;
        case 7:
            imgGene10->Picture = Image7->Picture;
            imgGene10->Hint = "Zwrot w ty³ (7)";
            break;
        case 8:
            imgGene10->Picture = Image8->Picture;
            imgGene10->Hint = "Zwrot w prawo (8)";
            break;
    }
}
//---------------------------------------------------------------------------
