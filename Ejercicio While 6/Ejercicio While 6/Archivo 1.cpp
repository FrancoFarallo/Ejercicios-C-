#include<iostream>

using namespace std;

int main()
{
	//Definicion de variables
	int x1, x2, lista1, lista2, valor;

	x1 = 1;
	x2 = 1;
	lista1 = 0;
	lista2 = 0;


	//Condicion lista 1
	while (x1 <= 15)
	{
		cout << "Ingrese un numero entero para la primera lista: ";
		cin >> valor;

		lista1 = lista1 + valor;

		x1 = x1 + 1;
	}

	//Condicion lista 2
	while (x2 <= 15)
	{
		cout << "Ingrese un numero entero para la segunda lista: ";
		cin >> valor;

		lista2 = lista2 + valor;

		x2 = x2 + 1;
	}

	if (lista1 == lista2)
	{
		cout << "\n";
		cout << "Listas Iguales";
	}
	else
	{
		if (lista1 > lista2)
		{
			cout << "\n";
			cout << "Lista 1 mayor";
		}
		else
		{
			cout << "\n";
			cout << "Lista 2 mayor";
		}
	}

	return 0;
}