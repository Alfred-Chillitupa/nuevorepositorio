#include <iostream>

//del 2-16 al 2.19

using namespace std;

int main(){

    //Ejercicio 2.16
    int numero1{0}, numero2{0}, suma{0}, diferencia{0}, producto{0}, cociente{0};
    cout << "Ingrese un numero: \n";
    cin >> numero1;
    cout << "Ingrese otro numero: \n";
    cin >> numero2;

    suma = numero1 + numero2;
    diferencia = numero1 - numero2;
    producto = numero1 * numero2;
    cociente = numero1 / numero2;

    cout << "La suma es: " << suma << endl;
    cout << "La diferencia es: " << diferencia << endl;
    cout << "El producto es: " << producto << endl;
    cout << "El cociente es: " << cociente << endl;

    //Ejercicio 2.17
    // a)   
    cout << "VX " << "YZ \n";  
    // b) 
    cout << "V" << "X " << "Y" << "Z\n";    
    // c)   
    cout << "VX ";    
    cout << "YZ\n";

    //Ejercicio 2.18

    int numero1{0}, numero2{0};
    cout << "Ingrese un numero: \n";
    cin >> numero1;
    cout << "Ingrese otro numero: \n";
    cin >> numero2;

    if (numero1>numero2){
        cout << "El mayor numero es: \n"<< numero1 << endl;
    }else if(numero1==numero2){
        cout << "Los numeros son iguales \n";
    }else if(numero2>numero1){
        cout << "El mayor numero es: \n"<< numero2 << endl;
    }

    //Ejercicio 2.19
    int numero1{0}, numero2{0}, numero3{0};
    int suma{0}, promedio{0}, producto{0};
    cout << "Ingrese tres numeros diferentes: ";
    cin >> numero1 >> numero2 >> numero3;

    suma = numero1 + numero2 + numero3;
    promedio = suma / 3;
    producto = numero1 * numero2 * numero3;

    cout << "La suma es: " << suma << endl;
    cout << "El promedio: " << promedio << endl;
    cout << "El producto es: " << producto << endl;
    
    if (numero1>numero2){
        if (numero1>numero3){
            cout << "El mayor es: " << numero1 << endl;
        }else{
            cout << "El mayor es: " << numero3 << endl;
        }
    }else{
        if (numero2>numero3){
            cout << "El mayor es: " << numero2 << endl;
        }else{
            cout << "El mayor es: " << numero3 << endl;
        }
    }



    return 0;
}