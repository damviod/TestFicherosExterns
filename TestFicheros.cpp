// TestFicheros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

#include "Matematicas.h"
#include "ScoreTools.h"

using namespace std;
using namespace MariaTools;

int main()
{
	cout << "Suma="<< SumaNumeros(100, 4)<<"\n";
	cout << "Resta=" << pepe::SumaNumeros(100, 4);
	cout << "Maxima puntuacion= " << MariaTools::ClampScore(200);
}
