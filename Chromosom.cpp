#include "Chromosom.h"

TChromosom::TChromosom()
{
    Initialize();
}

TChromosom::~TChromosom()
{
}

void TChromosom::Initialize()
{
    int i;

    for(i = 0; i < 10; i++)
    {
        SetGen(i, 1 + random(8), 1 + random(10));
    }
}

void TChromosom::SetOneGen(int pos, int value)
{
    if(pos >= 0 && pos < 10 && value > 0 && value <= 8)
    {
        Ruch[pos] = value;
    }
    else if (pos >=10 && pos < 20 && value > 0 && value <= 10)
    {
        Kolor[pos - 10] = value;
    }
}

void TChromosom::SetGen(int pos, int valueRuch, int valueKolor)
{
    if(pos >=0 && pos < 10)
    {
        if(valueRuch != -1)
        {
            Ruch[pos] = valueRuch;
        }
        if(valueKolor != -1)
        {
            Kolor[pos] = valueKolor;
        }
    }
}

int TChromosom::GetGenRuch(int pos) const
{
    if(pos >=0 && pos < 10)
    {
        return Ruch[pos];
    }
    else
    {
        return -1;
    }
}

int TChromosom::GetGenKolor(int pos) const
{
    if(pos >=0 && pos < 10)
    {
        return Kolor[pos];
    }
    else
    {
        return -1;
    }
}

int TChromosom::GetOneGen(int pos) const
{
    int ReturnValue;

    if(pos >= 0 && pos < 10)
    {
        ReturnValue = Ruch[pos];
    }
    else if (pos >=10 && pos < 20)
    {
        ReturnValue = Kolor[pos - 10];
    }
    else ReturnValue = -1;
    return ReturnValue;
}

TChromosom& TChromosom::operator=(const TChromosom &src)
{
    int i;

    if(this != &src)
    {
        for(i = 0; i < 10; i++)
        {
            SetGen(i, src.GetGenRuch(i), src.GetGenKolor(i));
        }
    }
    return *this;
}

void TChromosom::Crossover(TChromosom& Parent2, int Locus)
{
    TChromosom temp;
    int i;

    if(this != &Parent2)
    {
        if(Locus == 0)
        {
            Locus = 1 + random(19);
        }
        temp = Parent2;
        for(i = Locus; i < 20; i++)
        {
            Parent2.SetOneGen(i, GetOneGen(i));
            SetOneGen(i, temp.GetOneGen(i));
        }
    }
}

void TChromosom::Crossover(TChromosom& Parent2, int Locus1, int Locus2)
{
    TChromosom temp;
    int i;

    if(this != &Parent2)
    {
        temp = Parent2;
        if(Locus1 == 0)
        {
            Locus1 = 1 + random(9);
        }
        for(i = Locus1; i < 10; i++)
        {
            Parent2.SetOneGen(i, GetOneGen(i));
            SetOneGen(i, temp.GetOneGen(i));
        }
        if(Locus2 == 0)
        {
            Locus2 = 11 + random(9);
        }
        for(i = Locus2; i < 20; i++)
        {
            Parent2.SetOneGen(i, GetOneGen(i));
            SetOneGen(i, temp.GetOneGen(i));
        }
    }
}

void TChromosom::Mutation(int pos)
{
    int old, _new;

    if(pos >=0 && pos < 10)
    {
        old = GetGenRuch(pos);
        do
        {
            _new = 1 + random(8);
        } while (_new == old);
        SetGen(pos, _new, -1);
    }
    else if(pos >=10 && pos < 20)
    {
        old = GetGenKolor(pos - 10);
        do
        {
            _new = 1 + random(10);
        } while (_new == old);
        SetGen(pos - 10, -1, _new);
    }
}
