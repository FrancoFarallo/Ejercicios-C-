#include<iostream>

using namespace std;

int main()
{
	//Definior variables
	int dia, mes, año;

	//Ingreso de datos
	cout << "A continuacion ingrese su fecha de cumpleaños: ";
	cout << "\n";
	cout << "Dia: ";
	cin >> dia;
	cout << "\n";
	cout << "Mes: ";
	cin >> mes;
	cout << "\n";
	cout << "Año: ";
	cin >> año;

	//Condicion
	if (dia == 25 && mes == 12)
	{
		cout << "Su fecha de cumpleaños es navidad";
	}
	else
	{
		cout << "Su fecha de cumpleaños no es navidad";
	}
	return 0;
}