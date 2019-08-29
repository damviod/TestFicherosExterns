// TestFicheros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

#include "Matematicas.h"
#include "ScoreTools.h"

int playerScore = 50;
int enemyDamage[5] = { 10, 20, 30, 40, 50 };

using namespace std;
using namespace MariaTools;

int main()
{
	cout << "Puntuación del player = " << playerScore << "\n";
	cout << "Ahora al player le ataca la segunda nave\n";
	
	DamagePlayer(1);

	cout << "Puntuación del player = " << playerScore << "\n";

}
