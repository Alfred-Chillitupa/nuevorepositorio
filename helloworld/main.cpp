#include <iostream>

using namespace std;

int main()
{
    int x,y,suma,resta,multi;
    cout << "Ingrese un valor para x" << endl;
    cin >> x;
    cout << "Ingresa un valor para y" << endl;
    cin >> y;
    suma=x+y;
    resta=x-y;
    multi=x*y;
    cout << "Muy bien!!" << endl;
    cout << "La suma de los numeros es: " << suma << endl;
    cout << "La resta de los numeros es: " << resta << endl;
    cout << "La multiplicacion los numeros es: " << multi << endl;
    return 0;
}
