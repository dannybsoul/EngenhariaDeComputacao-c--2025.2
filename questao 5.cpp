/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario, senha;

    cout << "=== sistema de Login ===" << endl;

    cout << "usuario: ";
    cin >> usuario;

    cout << "Senha: ";
    cin >> senha;

    if (usuario == "admin" && senha == "1234") {
        cout << "login bem-sucedido!" << endl;
    } else {
        cout << "usuario ou senha incorretos." << endl;
    }

    return 0;
}