#include<iostream>

using namespace std;

int main()
{

	//Definir variables
	int cantidadProducto;
	float valorProducto, producto;

	//Ingreso de datos
	cout << "A continuacion ingrese el precio del producto:";
	cin >> valorProducto;
	cout << "A continuacion ingrese la cantidad de este producto:";
	cin >> cantidadProducto;

	//Operacion
	producto = valorProducto * cantidadProducto;

	//Mostrar resultado al usuario
	cout << "\n";
	cout << "Debe abonar: ";
	cout << producto;

	return 0;
}