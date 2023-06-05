#include<iostream>

using namespace std;

int main()
{
	//Definior variables
	int sueldo, antiguedad, resultado, aumento;

	//Ingreso de datos
	cout << "A continuacion ingrese el sueldo y los años de antiguedad: ";
	cout << "\n";
	cout << "Sueldo: ";
	cin >> sueldo;
	cout << "\n";
	cout << "Antiguedad: ";
	cin >> antiguedad;

	//Condicion
	if (sueldo >= 500)
	{
		cout << "\n";
		cout << "Su sueldo es de: ";
		cout << sueldo;
	}
	else
	{
		if (sueldo < 500 && antiguedad >= 10)
		{
			aumento = (20 * sueldo) / 100;

			resultado = sueldo + aumento;

			cout << "\n";
			cout << "Su sueldo es de: ";
			cout << resultado;
		}
		else
		{
			aumento = (5 * sueldo) / 100;

			resultado = sueldo + aumento;

			cout << "\n";
			cout << "Su sueldo es de: ";
			cout << resultado;
		}
	}
	return 0;
}