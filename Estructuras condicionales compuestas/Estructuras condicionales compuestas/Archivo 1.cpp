#include<iostream>

using namespace std;

int main()
{
	//Definicion de variables
	int num1, num2, num3;

	//Ingreso de datos
	cout << "A continuacion ingrese tres numeros distintos:";
	cout << "\n";
	cout << "Primer numero:";
	cin >> num1;
	cout << "\n";
	cout << "Segundo numero:";
	cin >> num2;
	cout << "\n";
	cout << "Tercer numero:";
	cin >> num3;

	//Desicion
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			cout << "Resultado:  ";
			cout << num1;
		}
		else
		{

		}
	}
	else
	{
		if (num2 > num3)
		{
			cout << "Resultado:  ";
			cout << num2;
		}
		else
		{
			cout << "Resultado:  ";
			cout << num3;
		}
	}
	return 0;
}