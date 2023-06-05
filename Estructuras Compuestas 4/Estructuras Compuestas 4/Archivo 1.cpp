#include<iostream>

using namespace std;

int main()
{
	//Definir variables
	int cantidaddePreguntas, preguntasCorrectas, porcentaje;

	//Ingresar variables
	cout << "A continuacion ingrese la cantidad de preguntas realizadas: ";
	cin >> cantidaddePreguntas;
	cout << "A continuacion ingrese la cantidad de preguntas correctas: ";
	cin >> preguntasCorrectas;

	//Operacion
	porcentaje = (preguntasCorrectas * 100) / cantidaddePreguntas;

	//Condicion
	if (porcentaje >= 75)
	{
		if (porcentaje >= 90)
		{
			cout << "Nivel maximo";
		}
		else
		{
			cout << "Nivel medio";
		}
	}
	else
	{
		if (porcentaje >= 50)
		{
			cout << "Nivel regular";
		}
		else
		{
			cout << "Fuera de nivel";
		}
	}
	return 0;
}