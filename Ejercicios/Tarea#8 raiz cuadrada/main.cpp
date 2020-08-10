#include <iostream>
#include <stdio.h>
#include <math.h>
#define Pi 3.1416

using namespace std;

int main(int argc, char const *argv[])
{
    double numero = 0;
    double seno = 0;
    double coseno = 0;
    double tangente = 0;
    double raiz = 0;


    numero = 2*Pi;
    seno = sin(numero);
    coseno = cos(numero);
    tangente = tan(numero);
    raiz = sqrt(numero);

    cout<< "numero: " << numero << endl;
    cout<< "seno: " << seno << endl;
    cout<< "coseno: " << coseno << endl;
    cout<< "tangente: " <<tangente << endl;
    cout<< "raiz cuadrada: "<< raiz << endl;
    
    return 0;
}
