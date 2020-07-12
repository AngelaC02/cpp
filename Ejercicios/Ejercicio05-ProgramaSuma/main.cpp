#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	//Datos de entrada
	int a = 10;
	int b = 12;
	int resultado = 0;
	
	cout << "Ingrese el valor de a:";
	cin >> a;
	
	cout << "Ingrese el valor de b";
	cin >> b;
	
	//Proceso
	resultado = a + b;

	//Salida
	cout<< "La suma de a + b es: " << resultado;
	
	
	
	return 0;
}
