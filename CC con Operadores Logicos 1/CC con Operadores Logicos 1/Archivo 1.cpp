#include<iostream>

using namespace std;

int main()
{
	//Definior variables
	int dia, mes, a�o;

	//Ingreso de datos
	cout << "A continuacion ingrese su fecha de cumplea�os: ";
	cout << "\n";
	cout << "Dia: ";
	cin >> dia;
	cout << "\n";
	cout << "Mes: ";
	cin >> mes;
	cout << "\n";
	cout << "A�o: ";
	cin >> a�o;

	//Condicion
	if (dia == 25 && mes == 12)
	{
		cout << "Su fecha de cumplea�os es navidad";
	}
	else
	{
		cout << "Su fecha de cumplea�os no es navidad";
	}
	return 0;
}