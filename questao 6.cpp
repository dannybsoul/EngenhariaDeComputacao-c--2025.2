/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3, media;

    cout << "digite a primeira nota (0 a 10): ";
    cin >> nota1;

    cout << "digite a segunda nota (0 a 10): ";
    cin >> nota2;

    cout << "digite a terceira nota (0 a 10): ";
    cin >> nota3;

    // Calculando a média
    media = (nota1 + nota2 + nota3) / 3.0;

    cout << "media: " << media << endl;

    if (media >= 7.0) {
        cout << "aprovado" << endl;
    } else if (media >= 5.0 && media < 7.0) {
        cout << "recuperacao" << endl;
    } else {
        cout << "reprovado" << endl;
    }

    return 0;
}