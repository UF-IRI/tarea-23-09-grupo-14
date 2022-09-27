#include <cstdlib>
#include <iostream>
#include "funciones.h"
#include "example.h"
using namespace std;
int main(int argc, char** argv)
{
    int x, y, z, w;
    x = 45;
    y = 12;
    z = mayor(x, y);
    w = menor(x, y);
    int fact = factorial(5);
    cout << "El numero mayor es: " << z<<endl;
    cout << "El numero menor es: " << w<<endl;
    cout << fact;

}
