/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int numero, maior;

    cout << "digite 5 numeros:" << endl;

    // Lê o primeiro número e já considera como o maior
    cin >> maior;

    // Agora lê os outros 4 números
    for (int i = 2; i <= 5; i++) {
        cin >> numero;
        if (numero > maior) {
            maior = numero;
        }
    }

    cout << "o maior numero digitado foi: " << maior << endl;

    return 0;
}