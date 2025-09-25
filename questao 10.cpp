/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;

    cout << "digite numeros inteiros (digite 0 para encerrar):" << endl;

    while (true) {
        cout << "numero: ";
        cin >> numero;

        if (numero == 0) {
            break; // encerra o loop
        }

        soma += numero; // soma acumulada
    }

    cout << "a soma dos numeros digitados eh: " << soma << endl;

    return 0;
}