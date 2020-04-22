#include <iostream>

using namespace std;

int main(){

    int numero{0},contador{0},a{0};
    cout << "Ingrese un numero: \n";
    cin >> numero;
    int pmodificar = numero;
    while (pmodificar > 0)
    {
        pmodificar /= 10;
        contador++;
    }
    //cout << contador<<endl;
    //Invertira el orden
    for (contador; contador > 0; contador--){
        a = numero % 10;
        cout << a << "  ";
        numero /= 10;
    }
    cout << endl;
    return 0;
}