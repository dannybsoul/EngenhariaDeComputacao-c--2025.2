/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "O numero " << numero << " e par." << endl;
    } else {
        cout << "O numero " << numero << " e impar." << endl;
    }

    return 0;
}