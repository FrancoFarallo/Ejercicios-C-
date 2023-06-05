#include<iostream>

using namespace std;

int main()
{
	//Definir variables
	int num1;

	//Ingreso de datos
	cout << "A continuacion ingrese un numero entero:";
	cin >> num1;

	//Condicion
	if (num1 >= 1)
	{
		cout << "Positivo";
	}
	else
	{
		if (num1 == 0)
		{
			cout << "Nulo";
		}
		else
		{
			cout << "Negativo";
		}
	}
	return 0;
}