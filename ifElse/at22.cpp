/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cout << "Digite um número: ";
    cin >> num;
    if(num > 10 || num < 0){
        cout << "Número invalido!";
    } else {
        cout << "Número válido!";
    };
    return 0;
}