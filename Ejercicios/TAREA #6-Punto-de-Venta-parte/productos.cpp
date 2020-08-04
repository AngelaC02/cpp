#include <iostream>

using namespace std;

 extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
   system("cls");

   int opcionProducto = 0;

   switch (opcion)
   {
   case 1:
   {
         cout<< "BEBIDAS CALIENTES"<< endl;
         cout<< "*****************"<<endl;
         cout<< "1 - Capuccino"<<endl;
         cout<< "2 - Expresso"<<endl;
         cout<< "3 - Cafe Mocha"<<endl;
         cout<< endl;

         cout<< "Ingrese una opcion: ";
         cin >> opcionProducto;

         switch (opcionProducto)
         {
         case 1:
              agregarProducto("1 Capuccino L 40.00", 1, 40);
               break;
         case 2:
              agregarProducto("1 Expresso L 30.00", 1, 30);
               break;

         case 3:
              agregarProducto("1 Cafe Mocha L 25.00", 1, 25);
               break;            
         
         default:
             {
               cout<< "opcion no valida";
               return;
               break;
             }
      }
      cout<< endl;
      cout<< "Producto agregado" << endl << endl;
      system("pause"); 

      break;
   }

   case 2:
   {
         cout<< "BEBIDAS FRIAS"<< endl;
         cout<< "*************"<<endl;
         cout<< "1 - Mochaccino" <<endl;
         cout<< "2 - Pina Colada Granita" <<endl;
         cout<< "3 - Caramel Granita" <<endl;
         cout<< endl;

         cout<< "Ingrese una opcion: ";
         cin >> opcionProducto;

         switch (opcionProducto)
         {
         case 1:
              agregarProducto("1 Mochaccino L 56.00", 1, 56);
               break;
         case 2:
              agregarProducto("1 Pina Colada Granita L 52.00", 1, 52);
               break;

         case 3:
              agregarProducto("1 Caramel Granita L 55.00", 1, 55);
               break;            
         
         default:
             {
               cout<< "opcion no valida";
               return;
               break;
             }
      }
      cout<< endl;
      cout<< "Producto agregado" << endl << endl;
      system("pause"); 

      break;
   }
        

   case 3:
   {
         cout<< "REPOSTERIA"<< endl;
         cout<< "**********"<<endl;
         cout<< "1 - Chilena Cookie" << endl;
         cout<< "2 - Quequito de Elote" << endl;
         cout<< "3 - Cheese Cake" << endl;
         
         cout<< "Ingrese una opcion: ";
         cin >> opcionProducto;

         switch (opcionProducto)
         {
         case 1:
              agregarProducto("1 Chilena Cookie L 32.00", 1, 32);
               break;
         case 2:
              agregarProducto("1 Quequito de Elote L 25.00", 1, 25);
               break;

         case 3:
              agregarProducto("1 Cheese Cake L 60.00", 1, 60);
               break;            
         
         default:
             {
               cout<< "opcion no valida";
               return;
               break;
             }
      }
      cout<< endl;
      cout<< "Producto agregado" << endl << endl;
      system("pause"); 

      break;
   }
    
   default:
      break;
    }

}