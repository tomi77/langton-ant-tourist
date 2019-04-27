object frmAnt: TfrmAnt
  Left = 195
  Top = 154
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Mrówka Langtona - turysta'
  ClientHeight = 434
  ClientWidth = 688
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  OnPaint = FormPaint
  PixelsPerInch = 96
  TextHeight = 13
  object pbxWorld: TPaintBox
    Left = 0
    Top = 0
    Width = 560
    Height = 434
    Align = alClient
  end
  object Panel: TPanel
    Left = 560
    Top = 0
    Width = 128
    Height = 434
    Align = alRight
    TabOrder = 0
    object Label2: TLabel
      Left = 8
      Top = 152
      Width = 86
      Height = 13
      Caption = 'Œrednia liczba pól:'
    end
    object Label3: TLabel
      Left = 8
      Top = 112
      Width = 109
      Height = 13
      Caption = 'Maksymalna liczba pól:'
    end
    object Label4: TLabel
      Left = 8
      Top = 72
      Width = 97
      Height = 13
      Caption = 'Minimalna liczba pól:'
    end
    object GroupBox1: TGroupBox
      Left = 1
      Top = 368
      Width = 126
      Height = 65
      Align = alBottom
      Caption = 'Wykonanie:'
      TabOrder = 0
      object Label1: TLabel
        Left = 8
        Top = 24
        Width = 92
        Height = 13
        Caption = 'Adriana B³achucka'
      end
    end
    object btnStart: TButton
      Left = 8
      Top = 40
      Width = 113
      Height = 25
      Caption = 'Start'
      Enabled = False
      TabOrder = 1
      OnClick = btnStartClick
    end
    object btnInitialize: TButton
      Left = 8
      Top = 8
      Width = 113
      Height = 25
      Caption = 'Inicjalizacja œwiata'
      Enabled = False
      TabOrder = 2
      OnClick = btnInitializeClick
    end
    object edtMinSumOccupyCells: TEdit
      Left = 8
      Top = 88
      Width = 113
      Height = 21
      Enabled = False
      TabOrder = 3
      Text = '0'
    end
    object edtMaxSumOccupyCells: TEdit
      Left = 7
      Top = 128
      Width = 113
      Height = 21
      Enabled = False
      TabOrder = 4
      Text = '0'
    end
    object edtAvgSumOccupyCells: TEdit
      Left = 7
      Top = 168
      Width = 113
      Height = 21
      Enabled = False
      TabOrder = 5
      Text = '0.0'
    end
    object pgbPopulationCounter: TProgressBar
      Left = 8
      Top = 216
      Width = 113
      Height = 16
      Min = 0
      Max = 100
      TabOrder = 6
    end
  end
  object MainMenu: TMainMenu
    Left = 8
    Top = 400
    object mnuFile: TMenuItem
      Caption = '&Plik'
      object mnuOpenWorld: TMenuItem
        Caption = 'Odczytaj œwiat'
        OnClick = mnuOpenWorldClick
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object mnuExit: TMenuItem
        Caption = 'Wyjœcie'
        OnClick = mnuExitClick
      end
    end
    object mnuEdit: TMenuItem
      Caption = '&Edycja'
      object mnuOptions: TMenuItem
        Caption = 'Opcje'
        OnClick = mnuOptionsClick
      end
      object mnuResult: TMenuItem
        Caption = 'Poka¿ najlepszego'
        Enabled = False
        OnClick = mnuResultClick
      end
    end
  end
  object odlgOpenWorld: TOpenDialog
    Left = 40
    Top = 400
  end
  object cdlgColors: TColorDialog
    Ctl3D = True
    Left = 72
    Top = 400
  end
end
