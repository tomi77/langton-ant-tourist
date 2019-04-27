object frmOptions: TfrmOptions
  Left = 191
  Top = 107
  Width = 401
  Height = 357
  Caption = 'Opcje'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Shape6: TShape
    Left = 136
    Top = 48
    Width = 33
    Height = 33
    Brush.Color = clRed
    Shape = stSquare
  end
  object Shape7: TShape
    Left = 168
    Top = 48
    Width = 33
    Height = 33
  end
  object Shape8: TShape
    Left = 200
    Top = 48
    Width = 33
    Height = 33
  end
  object Shape9: TShape
    Left = 232
    Top = 48
    Width = 33
    Height = 33
  end
  object Shape10: TShape
    Left = 264
    Top = 48
    Width = 33
    Height = 33
  end
  object btnOk: TButton
    Left = 312
    Top = 296
    Width = 75
    Height = 25
    Caption = 'Ok'
    Default = True
    ModalResult = 1
    TabOrder = 0
  end
  object TabbedNotebook1: TTabbedNotebook
    Left = 8
    Top = 8
    Width = 377
    Height = 281
    TabFont.Charset = DEFAULT_CHARSET
    TabFont.Color = clBtnText
    TabFont.Height = -11
    TabFont.Name = 'MS Sans Serif'
    TabFont.Style = []
    TabOrder = 1
    object TTabPage
      Left = 4
      Top = 24
      Caption = 'Plansza'
      object Label7: TLabel
        Left = 72
        Top = 136
        Width = 64
        Height = 13
        Caption = 'Rozmiar pola:'
      end
      object edtCellSize: TEdit
        Left = 144
        Top = 128
        Width = 121
        Height = 21
        TabOrder = 0
      end
      object GroupBox2: TGroupBox
        Left = 16
        Top = 8
        Width = 337
        Height = 105
        Caption = 'Kolory'
        TabOrder = 1
        object shpColor6: TShape
          Left = 80
          Top = 56
          Width = 33
          Height = 33
          Hint = '6'
          ParentShowHint = False
          Shape = stSquare
          ShowHint = True
          OnMouseUp = shpColor6MouseUp
        end
        object shpColor7: TShape
          Left = 112
          Top = 56
          Width = 33
          Height = 33
          Hint = '7'
          ParentShowHint = False
          ShowHint = True
          OnMouseUp = shpColor7MouseUp
        end
        object shpColor8: TShape
          Left = 144
          Top = 56
          Width = 33
          Height = 33
          Hint = '8'
          ParentShowHint = False
          ShowHint = True
          OnContextPopup = shpColor8ContextPopup
        end
        object shpColor9: TShape
          Left = 176
          Top = 56
          Width = 33
          Height = 33
          Hint = '9'
          ParentShowHint = False
          ShowHint = True
          OnMouseUp = shpColor9MouseUp
        end
        object shpColor10: TShape
          Left = 208
          Top = 56
          Width = 33
          Height = 33
          Hint = '10'
          ParentShowHint = False
          ShowHint = True
          OnMouseUp = shpColor10MouseUp
        end
        object shpColor5: TShape
          Left = 208
          Top = 24
          Width = 33
          Height = 33
          Hint = '5'
          ParentShowHint = False
          ShowHint = True
          OnMouseUp = shpColor5MouseUp
        end
        object shpColor4: TShape
          Left = 176
          Top = 24
          Width = 33
          Height = 33
          Hint = '4'
          ParentShowHint = False
          ShowHint = True
          OnMouseUp = shpColor4MouseUp
        end
        object shpColor3: TShape
          Left = 144
          Top = 24
          Width = 33
          Height = 33
          Hint = '3'
          ParentShowHint = False
          ShowHint = True
          OnMouseUp = shpColor3MouseUp
        end
        object shpColor2: TShape
          Left = 112
          Top = 24
          Width = 33
          Height = 33
          Hint = '2'
          ParentShowHint = False
          ShowHint = True
          OnMouseUp = shpColor2MouseUp
        end
        object shpColor1: TShape
          Left = 80
          Top = 24
          Width = 33
          Height = 33
          Hint = '1'
          ParentShowHint = False
          Shape = stSquare
          ShowHint = True
          OnMouseUp = shpColor1MouseUp
        end
        object Label2: TLabel
          Left = 64
          Top = 40
          Width = 6
          Height = 13
          Caption = '1'
        end
        object Label11: TLabel
          Left = 248
          Top = 40
          Width = 6
          Height = 13
          Caption = '5'
        end
        object Label12: TLabel
          Left = 64
          Top = 64
          Width = 6
          Height = 13
          Caption = '6'
        end
        object Label13: TLabel
          Left = 248
          Top = 64
          Width = 12
          Height = 13
          Caption = '10'
        end
      end
    end
    object TTabPage
      Left = 4
      Top = 24
      Caption = 'Populacja'
      object Label1: TLabel
        Left = 88
        Top = 24
        Width = 92
        Height = 13
        Caption = 'Wielkoœæ populacji:'
      end
      object edtPopulationSize: TEdit
        Left = 208
        Top = 16
        Width = 73
        Height = 21
        TabOrder = 0
      end
      object GroupBox1: TGroupBox
        Left = 16
        Top = 48
        Width = 337
        Height = 105
        Caption = 'Skoñcz gdy:'
        TabOrder = 1
        object Label4: TLabel
          Left = 112
          Top = 24
          Width = 67
          Height = 13
          Caption = 'Iloœæ iteracji = '
        end
        object Label9: TLabel
          Left = 136
          Top = 48
          Width = 14
          Height = 13
          Caption = 'lub'
        end
        object Label10: TLabel
          Left = 64
          Top = 72
          Width = 115
          Height = 13
          Caption = 'Iloœæ zwiedzonych pól = '
        end
        object edtNumberOfIterations: TEdit
          Left = 184
          Top = 16
          Width = 57
          Height = 21
          TabOrder = 0
        end
        object sedtNumberOfSteps: TCSpinEdit
          Left = 184
          Top = 64
          Width = 57
          Height = 22
          TabStop = True
          MaxValue = 961
          MinValue = 1
          ParentColor = False
          TabOrder = 1
          Value = 800
        end
      end
    end
    object TTabPage
      Left = 4
      Top = 24
      Caption = 'Gen'
      object Label3: TLabel
        Left = 80
        Top = 192
        Width = 101
        Height = 13
        Caption = 'Punkt krzy¿owania 1:'
      end
      object Label5: TLabel
        Left = 120
        Top = 72
        Width = 141
        Height = 13
        Caption = 'Prawdopodobieñstwo mutacji:'
      end
      object Label6: TLabel
        Left = 120
        Top = 104
        Width = 166
        Height = 13
        Caption = 'Prawdopodobieñstwo krzy¿owania:'
      end
      object Label8: TLabel
        Left = 80
        Top = 224
        Width = 101
        Height = 13
        Caption = 'Punkt krzy¿owania 2:'
      end
      object cbxCrossover: TCheckBox
        Left = 16
        Top = 104
        Width = 89
        Height = 17
        Alignment = taLeftJustify
        Caption = 'Krzy¿owanie:'
        Checked = True
        State = cbChecked
        TabOrder = 0
        OnClick = cbxCrossoverClick
      end
      object cbxMutations: TCheckBox
        Left = 16
        Top = 72
        Width = 89
        Height = 17
        Alignment = taLeftJustify
        Caption = 'Mutacja:'
        Checked = True
        State = cbChecked
        TabOrder = 1
        OnClick = cbxMutationsClick
      end
      object rgrpNumberOfCrossoverPoints: TRadioGroup
        Left = 16
        Top = 128
        Width = 337
        Height = 49
        Caption = 'Iloœæ punktów krzy¿owania:'
        Columns = 2
        ItemIndex = 0
        Items.Strings = (
          'jeden'
          'dwa')
        TabOrder = 2
        OnClick = rgrpNumberOfCrossoverPointsClick
      end
      object cboLocus1: TComboBox
        Left = 192
        Top = 184
        Width = 81
        Height = 21
        ItemHeight = 13
        TabOrder = 3
        Text = 'cboLocus1'
        Items.Strings = (
          'Losowo'
          '1'
          '2'
          '3'
          '4'
          '5'
          '6'
          '7'
          '8'
          '9'
          '10'
          '11'
          '12'
          '13'
          '14'
          '15'
          '16'
          '17'
          '18'
          '19')
      end
      object edtMutationProbability: TEdit
        Left = 296
        Top = 64
        Width = 57
        Height = 21
        TabOrder = 4
      end
      object edtCrossoverProbability: TEdit
        Left = 296
        Top = 96
        Width = 57
        Height = 21
        TabOrder = 5
      end
      object cboLocus2: TComboBox
        Left = 192
        Top = 216
        Width = 81
        Height = 21
        Enabled = False
        ItemHeight = 13
        TabOrder = 6
        Text = 'cboCrossPoint1'
        Items.Strings = (
          'Losowo'
          '11'
          '12'
          '13'
          '14'
          '15'
          '16'
          '17'
          '18'
          '19')
      end
      object rgrpSelectionMethod: TRadioGroup
        Left = 16
        Top = 8
        Width = 337
        Height = 49
        Caption = 'Selekcja:'
        Columns = 2
        ItemIndex = 0
        Items.Strings = (
          'Ko³o ruletki'
          'Turniejowa')
        TabOrder = 7
      end
    end
  end
  object cdlgColors: TColorDialog
    Ctl3D = True
    Left = 8
    Top = 296
  end
end
