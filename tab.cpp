#include <iostream>
#include "Tableau.h"
#include "TableauBorne.h"

using namespace std;

int main() {
    cout << "=== 1. Test de la classe de base Tableau ===" << endl;
    Tableau t1(5);
    t1[0] = 1.5f;
    t1[1] = 3.2f;
    t1[2] = 4.8f;

    cout << "Tableau t1 : ";
    t1.affiche();

    Tableau t2 = t1;
    cout << "Tableau t2 (copie de t1) : ";
    t2.affiche();

    cout << "\n=== 2. Test de la classe derivee TableauBorne ===" << endl;
    TableauBorne tb(4, 0.0f, 10.0f);

    cout << "Affichage initial (remplissage automatique dans l'intervalle) :" << endl;
    tb.affiche();

    cout << "\n=== 3. Test de l'acces en lecture (operateur []) ===" << endl;
    cout << "Element a l'indice 1 : " << tb[1] << endl;

    cout << "\n=== 4. Test de la modification controlee (operateur ()) ===" << endl;
    cout << "Modification de l'indice 2 a la valeur 7.5..." << endl;
    tb(2, 7.5f);
    tb.affiche();

    cout << "Tentative de modification avec une valeur hors bornes (15.0) :" << endl;
    tb(2, 15.0f);

    cout << "Tentative de modification avec un indice hors limites :" << endl;
    tb(10, 5.0f);

    return 0;
}