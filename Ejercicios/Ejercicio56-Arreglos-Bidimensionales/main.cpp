#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    
    string nombres[3][2];

    nombres[0][0] = "Juan";
    nombres[0][1] = "Perez";

    nombres[1][0] = "Marvin";
    nombres[1][1] = "Mejia";

    nombres[2][0] = "Caleb";
    nombres[2][1] = "Castro";

    for (int i =0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << nombres[i][j] << " ";
        }
         cout << endl;
    }
    return 0;
}
