#include<iostream>

using namespace std;

int main()
{
	//Definir variables
	int num1;

	//Ingreso de datos 
	cout << "Ingrese un numero entero de hasta tres digitos: ";
	cin >> num1;

	//Condicion
	if (num1 > 99)
	{
		if (num1 <= 999)
		{
			cout << "Este numero tiene tres digitos";
		}
		else
		{
			cout << "ERROR: Este numero tiene mas de tres digitos";
		}
	}
	else
	{
		if (num1 >= 10)
		{
			cout << "Este numero tiene dos digitos";
		}
		else
		{
			cout << "Este numero tiene un digito";
		}
	}
	return 0;
}