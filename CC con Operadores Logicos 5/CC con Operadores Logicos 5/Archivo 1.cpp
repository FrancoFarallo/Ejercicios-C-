#include<iostream>

using namespace std;

int main()
{
	//Definior variables
	int coordenadaX, coordenadaY;

	//Ingreso de datos
	cout << "A continuacion ingrese dos coordenadas distintas de 0: ";
	cout << "\n";
	cout << "Primero X: ";
	cin >> coordenadaX;
	cout << "\n";
	cout << "Segundo Y: ";
	cin >> coordenadaY;

	//Condicion
	if (coordenadaX > 0 && coordenadaY > 0 || coordenadaX < 0 && coordenadaY > 0)
	{
		if (coordenadaX > 0 && coordenadaY > 0)
		{
			cout << "\n";
			cout << "Esta coordenada se encuentra en el cuadrante 1";
		}
		else
		{
			cout << "\n";
			cout << "Esta coordenada se encuentra en el cuadrante 2";
		}
	}
	else
	{
		if (coordenadaX < 0 && coordenadaY < 0)
		{
			cout << "\n";
			cout << "Esta coordenada se encuentra en el cuadrante 3";
		}
		else
		{
			cout << "\n";
			cout << "Esta coordenada se encuentra en el cuadrante 4";
		}
	}
	return 0;
}