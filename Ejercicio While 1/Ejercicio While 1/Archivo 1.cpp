#include<iostream>

using namespace std;

int main()
{
	//Definicion de variables
	int nota, x, promocionados, menoresa7;

	//Ingreso de datos
	promocionados = 0;
	menoresa7 = 0;
	x = 1;

	//Condicion
	while (x <= 10)
	{
		cout << "Ingrese la nota del alumno: ";
		cin >> nota;

		if (nota >= 7)
		{
			promocionados = promocionados + 1;
		}
		else
		{
			menoresa7 = menoresa7 + 1;
		}
		x = x + 1;
	}
	cout << "\n";
	cout << "Alumnos con notas iguales o superiores a 7: ";
	cout << promocionados;
	cout << "\n";
	cout << "Alumnos con notas inferiores a 7: ";
	cout << menoresa7;

	return 0;
}