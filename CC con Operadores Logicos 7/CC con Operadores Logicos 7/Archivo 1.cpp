#include<iostream>

using namespace std;

int main()
{
	//Definior variables
	int num1, num2, num3;

	//Ingreso de datos
	cout << "A continuacion ingrese tres numeros enteros: ";
	cout << "\n";
	cout << "Primero: ";
	cin >> num1;
	cout << "\n";
	cout << "Segundo: ";
	cin >> num2;
	cout << "\n";
	cout << "Tercero: ";
	cin >> num3;

	//Condicion
	if (num1 > num2 && num1 > num3)
	{
		if (num2 > num3)
		{
			cout << "\n";
			cout << "Numero Mayor: ";
			cout << num1;
			cout << "\n";
			cout << "Numero Menor: ";
			cout << num3;
		}
		else
		{
			cout << "\n";
			cout << "Numero Mayor: ";
			cout << num1;
			cout << "\n";
			cout << "Numero Menor: ";
			cout << num2;
		}
	}
	else
	{
		if (num2 > num3)
		{
			cout << "\n";
			cout << "Numero Mayor: ";
			cout << num2;
			cout << "\n";
			cout << "Numero Menor: ";
			cout << num1;
		}
		else
		{
			cout << "\n";
			cout << "Numero Mayor: ";
			cout << num3;
			cout << "\n";
			cout << "Numero Menor: ";
			cout << num1;
		}
	}
	return 0;
}