#include <stdlib.h>

class TChromosom
{
private:
//    int *Ruch;
//    int *Kolor;
    int Ruch[10];
    int Kolor[10];

public:
    TChromosom();
    ~TChromosom();

    void Initialize();
    void SetGen(int pos, int valueRuch, int valueKolor);
    void SetOneGen(int pos, int value);
    int GetGenRuch(int pos) const;
    int GetGenKolor(int pos) const;
    int GetOneGen(int pos) const;
    TChromosom& operator=(const TChromosom &src);
    void Crossover(TChromosom& Parent2, int Locus);
    void Crossover(TChromosom& Parent2, int Locus1, int Locus2);
    void Mutation(int pos);
};

