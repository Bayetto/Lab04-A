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
	int stars;
	int spaces;

	for (int rang = 0; rang < 10; rang++)
	{
		for (int spaces = 0; spaces < rang; spaces++)
		{
			cout << "  ";
		}

		for (int stars = 0; stars < 10 - rang ; stars++)
		{
			if (stars < 9 - rang)
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