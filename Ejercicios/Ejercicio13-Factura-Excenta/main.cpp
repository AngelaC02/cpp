#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
//Datos
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int  descuento = 0;
    char estaExcenta;
    double  calculoDescuento = 0;
    double  calculoImpuesto = 0;

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;

	cout<< "Ingrese el descuento (0,10,15,20): ";
	cin >> descuento;

    cout<< "Es Factura excenta? s/n" <<endl;
    cin >> estaExcenta;

    
    //Proceso
    if(estaExcenta == 's' || estaExcenta =='S')
    {
    calculoDescuento = (subtotal + descuento);
    calculoImpuesto = 0 ;
    total = calculoDescuento + calculoImpuesto;

    }
    
    if(estaExcenta == 'n' || estaExcenta == 'N')
    {
    calculoDescuento = (subtotal + descuento)/100;
    calculoImpuesto = subtotal * 0.15;
    total = subtotal + calculoImpuesto;
    }

    //Salida

    cout << endl;
    cout << "Total a pagar es: " << total ;


	
	return 0;
}
