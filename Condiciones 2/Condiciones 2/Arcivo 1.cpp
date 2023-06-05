#include<iostream>

using namespace std;

int main()
{
	//Definir variables
	int num1, num2, num3,  suma;
	float promedio;

	//Ingreso de datos
	cout << "A continmuacion ingrese las tres notas en numero entero:";
	cout << "\n";
	cout << "Nota 1:";
	cin >> num1;
	cout << "Nota 2:";
	cin >> num2;
	cout << "Nota 3:";
	cin >> num3;

	//Operacion
	suma = num1 + num2 + num3;
	promedio = suma / static_cast<float>(3);

	//Condicion
	if (promedio >= 7)
	{
		cout << "\n";
		cout << "¡Promocionado!";
	}
	else
	{
	}
	return 0;
}