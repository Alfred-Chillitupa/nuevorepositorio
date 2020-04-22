#include <iostream>

//del 2.27 al 2.29

using namespace std;

int main(){

    //Ejercicio 2.27

    char letra;
    cout << "Ingrese un caracter: \n";
    cin >> letra;
    cout << "Al caracter '" << letra << "' le corresponde el entero ";
    cout << static_cast<int>(letra) << endl;

    //Ejercicio 2.28

    int numero{0},millar{0},centena{0},decena{0};
    cout << "Ingrese un numero de 4 digitos: \n";
    cin >> numero;
    millar = numero / 1000;
    numero %= 1000;
    centena = numero / 100;
    numero %= 100;
    decena = numero / 10;
    numero %= 10;
    cout << numero << "  ";
    cout <<  decena << "  ";
    cout <<  centena << "  ";
    cout <<  millar << endl;

    //Ejercicio 2.29

    int longitud{0};
    cout << "Face lenght\tSurface area\tVolume \nof cube (cm) \tof cube (cm^2) \tof cube (cm^3) \n";
    cout << longitud << "\t\t" << 6 * longitud * longitud << "\t\t" << longitud * longitud * longitud << endl;
    longitud = 1;
    cout << longitud << "\t\t" << 6 * longitud * longitud << "\t\t" << longitud * longitud * longitud << endl;
    longitud = 2;
    cout << longitud << "\t\t" << 6 * longitud * longitud << "\t\t" << longitud * longitud * longitud << endl;
    longitud = 3;
    cout << longitud << "\t\t" << 6 * longitud * longitud << "\t\t" << longitud * longitud * longitud << endl;
    longitud = 4;
    cout << longitud << "\t\t" << 6 * longitud * longitud << "\t\t" << longitud * longitud * longitud << endl;

    return 0;
}