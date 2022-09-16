/*==================================
AUTEUR : Étienne Bayette-Riendeau
PROJET : Lab04(A)1.2
NOM DU FICHIER : main.cpp
DATE : 2022-09-13
DESCRIPTION : convertir un algorithme en c++
==================================*/

#include <iostream>

using namespace std;

int main() {

	int rang;
	int colone;

	for (int rang = 0; rang < 10; rang++)
	{
		
		for (int colone = 0; colone < rang + 1; colone++)
		{
			if (colone < rang)
			{
				cout << "* ";
			}
			else
			{
				cout << "* " << endl;
			}

		}
	}
	system("PAUSE>0");
}