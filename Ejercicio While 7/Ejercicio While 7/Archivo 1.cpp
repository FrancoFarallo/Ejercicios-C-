#include<iostream>

using namespace std;

int main()
{
	//Definir variables
	int x, n, pares, impares, valor;

	x = 1;
	pares = 0;
	impares = 0;

	//Ingreso de datos
	cout << "Indique la cantidad de numeros enteros a evaluar: ";
	cin >> n;

	//Conmdicion
	while (x <= n)
	{
		cout << "\n";
		cout << "Ingrese un valor: ";
		cin >> valor;

		if (valor % 2 == 0)
		{
			pares = pares + 1;
		}
		else
		{
			impares = impares + 1;
		}

		x = x + 1;
	}

	cout << "\n";
	cout << "Valores pares: ";
	cout << pares;

	cout << "\n";
	cout << "Valores impares: ";
	cout << impares;

	return 0;
}