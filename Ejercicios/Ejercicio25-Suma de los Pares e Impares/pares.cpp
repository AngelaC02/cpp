#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0 ;
    int impares = 0 ;

    for (int i = 1; i <= 10; i++)
    {
      if (i % 2 != 0)
      {
          impares = impares + i;
      } else
      {
         pares = i + pares;
      }

     
    }

    

    cout<< endl;
    cout<< endl;
    cout<< "Pares: " <<pares << endl;
    cout<< "Impares:" << impares << endl;
    cout<< "Total:" << pares + impares << endl;
    return 0;
}
