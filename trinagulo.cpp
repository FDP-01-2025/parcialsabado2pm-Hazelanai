#include <iostream>
using namespace std;

int main(){

    int fila;
    cout <<"Ingrese la cantidad de filas" << endl;
    cin >> fila;

    for(int i = 1; i <= fila; i++){
        for(int j = 1; j < i; j++)
        cout  <<"*" << endl;
    }


return 0;
}