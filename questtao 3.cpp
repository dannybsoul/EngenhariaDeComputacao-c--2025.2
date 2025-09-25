/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Digite idades (digite 0 para encerrar):" << endl;

    while (true) {
        cout << "Idade: ";
        cin >> idade;

        if (idade == 0) {
            cout << "Programa encerrado." << endl;
            break; // sai do loop
        }

        if (idade >= 18) {
            cout << "Voce eh maior de idade." << endl;
        } else {
            cout << "Voce eh menor de idade." << endl;
        }
    }

    return 0;
}