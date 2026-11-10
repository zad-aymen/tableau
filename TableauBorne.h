#pragma once
#include "Tableau.h"
class TableauBorne :public Tableau
{
private:
    float borneMin;
    float borneMax;

public:
    TableauBorne(int n, float min, float max);
    float operator[](int index) const;

    void operator()(int index, float nouvelleValeur);
    void affiche() const;
};

