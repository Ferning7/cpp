/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int ano = 364;
    cout << "Digite um ano: \n";
    cin >> ano;
    
    if(ano %4 == 0){
        cout << "Ano bissexto";
    } else {
        cout << "Ano comum";
    };
    return 0;
}