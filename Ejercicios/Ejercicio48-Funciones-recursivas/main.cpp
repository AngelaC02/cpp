#include <iostream>

using namespace std;

int numeroSecreto = 7;

void adivinarNumeroSecreto(int miNumero)
{
    if (miNumero == numeroSecreto)
    {
        cout<< "Adivinastes!!" << endl;
    }
    else
    {
        cout << "Intento Fallido con "<< miNumero << endl;

        int otroNumero = 0;
        cout<< "Ingrese otro numero: ";
        cin>> otroNumero;
        adivinarNumeroSecreto(otroNumero);
    }
}

int main(int argc, char const *argv[]) 
{
        
  adivinarNumeroSecreto(5);  
        
        
    return 0;
}
    
    
    
    

