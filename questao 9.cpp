/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 20) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    }

    return 0;
}