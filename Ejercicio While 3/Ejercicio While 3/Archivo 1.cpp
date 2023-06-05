#include<iostream>

using namespace std;

int main()
{
	//Definir variables
	int x, n, sueldo, entre1y3, masde3, suma;

	//Ingreso de datos
	cout << "Ingrese la cantidad de sueldos a evaluar: ";
	cin >> n;
	x = 1;
	entre1y3 = 0;
	masde3 = 0;
	suma = 0;

	//Condicion
	while (x <= n)
	{
		cout << "\n";
		cout << "Ingrese el sueldo: ";
		cin >> sueldo;

		if (sueldo > 300)
		{
			masde3 = masde3 + 1;
		}
		else
		{
			entre1y3 = entre1y3 + 1;
		}

		suma = suma + sueldo;

		x = x + 1;
	}

	cout << "\n";
	cout << "Gasto total en sueldos: ";
	cout << suma;

	cout << "\n";
	cout << "Cantidad de empleados entre $100 y $300: ";
	cout << entre1y3;

	cout << "\n";
	cout << "Cantidad de empleados mayor a $300: ";
	cout << masde3;

	return 0;
}