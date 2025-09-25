/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int soma = 0;

    while (i <= 50) {
        soma += i; // soma = soma + i
        i++;
    }

    cout << "A soma dos numeros de 1 a 50 e: " << soma << endl;

    return 0;
}