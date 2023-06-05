#include<iostream>

using namespace std;

int main()
{
	//Definir variables
	int num1;

	//Ingreso de datos
	cout << "A continuacion ingrese un numero positivo entero de uno o dos digitos:";
	cin >> num1;

	if (num1 <= 9)
	{
		cout << "\n";
		cout << "Este numero tiene un digito";
	}
	else
	{
		cout << "\n";
		cout << "Este numero tiene dos digitos";
	}
	return 0;
}