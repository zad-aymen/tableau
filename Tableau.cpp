#include "Tableau.h"
Tableau::Tableau(int n)
{
    if (n <= 0) {
        this->taille = 0;
        this->tab = nullptr;
    }
    else {
        this->taille = n;
        this->tab = new float[taille];
        for (int i = 0; i < this->taille; ++i)
            this->tab[i] = 0.0f; // initialisation à 0
    }
}

Tableau::Tableau(const Tableau& T)
{
    this->taille = T.taille;
    if (this->taille > 0) {
        this->tab = new float[this->taille];
        for (int i = 0; i < this->taille; ++i)
            this->tab[i] = T.tab[i];
    }
    else {
        this->tab = nullptr;
    }
}

Tableau& Tableau::operator=(const Tableau& T)
{
    if (this != &T) {
        delete[] this->tab;
        this->taille = T.taille;
        if (this->taille > 0) {
            this->tab = new float[this->taille];
            for (int i = 0; i < this->taille; ++i)
                this->tab[i] = T.tab[i];
        }
        else {
            this->tab = nullptr;
        }
    }
    return *this;
}

float& Tableau::operator[](int index)
{
    if (index < 0 || index >= this->taille)
        cout << "Index hors limites" << endl;
    return this->tab[index];
}

void Tableau::affiche() const
{
    for (int i = 0; i < this->taille; ++i)
        cout << this->tab[i] << " "; cout << endl;
}

Tableau::~Tableau()
{
    delete[] tab;
    tab = nullptr;
}
