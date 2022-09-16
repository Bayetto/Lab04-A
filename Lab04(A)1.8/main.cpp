/*==================================
AUTEUR : Étienne Bayette-Riendeau
PROJET : Lab04(A)1.8
NOM DU FICHIER : main.cpp
DATE : 2022-09-13
DESCRIPTION : convertir un algorithme en c++
==================================*/
#include <iostream>
using namespace std;

int main() {

    int depart;
    int fin;
    int valInc;
    int nb;
    int nb2;

    cout << "Quelle est la valeur de depart ?" << endl;
    cin >> depart;
    cout << "Quelle est la valeur de fin ?" << endl;
    cin >> fin;
    cout << "Quel est l'incrementation ?" << endl;
    cin >> valInc;

    nb = ((fin - depart)/valInc);
    nb2 = depart;

    cout << depart << " ";
    for (int nb3 = 0; nb3 < nb; nb3++) {
        nb2 = nb2 + valInc;
       cout << nb2 << " ";
    }
}
