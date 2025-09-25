/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int numeroSecreto = 42;
    int palpite;

    cout << "=== jogo de adivinhacao ===" << endl;
    cout << "tente adivinhar o numero secreto!" << endl;

    while (true) {
        cout << "digite seu palpite: ";
        cin >> palpite;

        if (palpite == numeroSecreto) {
            cout << "parabens! Voce acertou o numero secreto!" << endl;
            break; // encerra o jogo
        } else if (palpite < numeroSecreto) {
            cout << "o numero secreto eh MAIOR que " << palpite << "." << endl;
        } else {
            cout << "o numero secreto eh MENOR que " << palpite << "." << endl;
        }
    }

    return 0;
}