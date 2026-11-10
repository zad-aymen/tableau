#pragma once
#include <iostream>
using namespace std;

class Tableau
{
protected:
    int taille;
    float* tab; 

public:
    // Constructeur
    Tableau(int n);

    // Constructeur de recopie
    Tableau(const Tableau& autre);

    // Opérateur d'affectation
    Tableau& operator=(const Tableau& autre);

    // Surcharge de l’opérateur []
    float& operator[](int index);

    // Méthode d'affichage
    void affiche() const;

    // Destructeur
    ~Tableau();
};
