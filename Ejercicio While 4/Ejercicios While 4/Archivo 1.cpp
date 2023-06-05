#include<iostream>

using namespace std;

int main()
{
	//Definicion de variables
	int x, suma;

	x = 1;
	suma = 0;

	while (x <= 25)
	{
		suma = suma + 11;
		cout << "\n";
		cout << suma;

		x = x + 1;
	}

	return 0;

}