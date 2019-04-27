//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("Ant.res");
USEFORM("AntForm.cpp", frmAnt);
USEFORM("OptionsForm.cpp", frmOptions);
USEUNIT("Chromosom.cpp");
USEFORM("ResultForm.cpp", frmResult);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    try
    {
        Application->Initialize();
        Application->CreateForm(__classid(TfrmAnt), &frmAnt);
         Application->CreateForm(__classid(TfrmOptions), &frmOptions);
         Application->CreateForm(__classid(TfrmResult), &frmResult);
         Application->Run();
    }
    catch (Exception &exception)
    {
         Application->ShowException(&exception);
    }
    return 0;
}
//---------------------------------------------------------------------------
