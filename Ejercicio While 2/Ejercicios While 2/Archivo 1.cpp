#include<iostream>

using namespace std;

int main()
{
	//Definicion de variables
	int x, n;
	float altura, promedio, suma;

	//Ingreso de datos
	x = 1;
	cout << "Indique la cantidad de datos a ingresar: ";
	cin >> n;
	altura = 0;

	//Condicion
	while (x <= n)
	{
		cout << "\n";
		cout << "Ingrese una altura: ";
		cin >> suma;

		altura = altura + suma;
        
		x = x + 1;
	}

	promedio = altura / n;
	cout << "\n";
	cout << "Altura promedio: ";
	cout << promedio;

	return 0;
}