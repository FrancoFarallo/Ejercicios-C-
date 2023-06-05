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
	if (num1 <10 && num2 <10 && num3 <10)
	{
		cout << "\n";
		cout << "Todos los valores ingresados son menores a 10";
	}
	else
	{
	}
	return 0;
}