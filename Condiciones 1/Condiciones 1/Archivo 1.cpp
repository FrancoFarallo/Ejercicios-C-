#include<iostream>

using namespace std;

int main()
{
	//Definicion de variables
	int num1, num2, suma, resta, multiplicacion;
	float division;

	//Ingreso de datos
	cout << "A continuacion ingrese dos numeros enteros:";
	cout << "\n";
	cout << "Primer numero:";
	cin >> num1;
	cout << "\n";
	cout << "Segundo numero:";
	cin >> num2;

	//Desicion y operaciones
	if (num1 > num2)
	{
		suma = num1 + num2;
		cout << "\n";
		cout << "Resultado Suma:  ";
		cout << suma;

		resta = num1 - num2;
		cout << "\n";
		cout << "Resultado Resta:  ";
		cout << resta;
	}
    else 
	{
		multiplicacion = num1 * num2;
		cout << "\n";
		cout << "Resultado Multiplicacion:  ";
		cout << multiplicacion;

		division = static_cast<float>(num1) / num2;
		cout << "\n";
		cout << "Resultado Division:  ";
		cout << division;
	}
	return 0;
}