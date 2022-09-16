/*==================================
AUTEUR : Étienne Bayette-Riendeau
PROJET : Lab04(A)1.6
NOM DU FICHIER : main.cpp
DATE : 2022-09-13
DESCRIPTION : convertir un algorithme en c++
==================================*/

#include <iostream>

using namespace std;

int main() {

	int rang;
	int colone = 1;
	int stars;
	int spaces;

	for (int rang = 0; rang < 10; rang++) // ranger (10)
	{
		
		for (int spaces = 1; spaces < (10 - rang)* 2 ; spaces++) // espaces
		{
			cout << " ";
		}

		for (int stars = 0; stars < colone; stars++) // etoiles
		{
			if (stars < colone - 1)
			{
				cout << "* ";
			}
			else
			{
				cout << "* " << endl;
			}
		}
		colone++;
	}

	system("PAUSE>0");


}