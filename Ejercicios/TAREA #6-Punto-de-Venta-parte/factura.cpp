#include <iostream>

using namespace std;

double subtotal;
double calculoImp;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
}

void imprimirFactura()
{
    system("cls");
    cout<< "*******" << endl;
    cout<< "FACTURA" << endl;
    cout<< "*******" << endl;
    cout<< endl;

    cout<< "Productos:" << endl;
    cout<< listaProductos;

    calculoImp = subtotal * 0.15;
    
    cout<< "-------------------------------------";
    cout<< endl;
    cout<< "Subtotal:" << subtotal;
    cout<< endl;
    cout<< "Impuesto incluido: " << calculoImp;
    cout<< endl;
    cout<< "Total a pagar: " << subtotal + calculoImp ;
    cout<< endl;
    cout<< endl;
    system("pause");
}