// userStaticLibHour.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "DateH.h"
#include "Heure.h"

using namespace std;
using namespace DateHeure;
int main()
{
	/*
Heure H1(2, 33, 44);
Heure H2(222, 533, 44);
if (H2 > H1) cout << "true" << endl;
else cout << "false" << endl;
*/
	DateH D1(22, 33, 45, 29, 02, 2000);
	DateH D2(22, 33, 46, 29, 02, 2000);
	if (D2 > D1) cout << "true" << endl;
	else cout << "false" << endl;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
