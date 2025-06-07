#include <iostream>
using namespace std;

int main(){

    int n;
    cout <<"Ingrse el numero" << endl;
    cin >> n;
    int suma = 0;

    while(int numero = 0 <= n){
        int pares = 2 % n == 0; 
        //sumar solo si el numero es par
        suma += pares;
        cout <<"Los numeros pares de " << n <<"es" << suma << endl;
        
    }

    return 0;
}