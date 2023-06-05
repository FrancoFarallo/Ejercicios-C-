#include<iostream>

using namespace std;

int main()
{
	//Definicion de variables
	int x, producto;

	x = 1;
	producto = 8;

	//Condicion
	while (x <= 7)
	{
		cout << "\n";
		cout << producto;
		producto = producto * 2;

		x = x + 1;
	}

	return 0;
}