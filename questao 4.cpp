/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "O maior numero e: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "O maior numero e: " << num2 << endl;
    } else {
        cout << "Os numeros sao iguais." << endl;
    }

    return 0;
}