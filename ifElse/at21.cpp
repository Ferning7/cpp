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
    string nome;
    cout << "Digite seu nome: ";
    cin >> nome;
    
    if(nome == "Wilson" || nome == "Gloria"){
        cout << "Olá, bem-vindo(a) de volta!";
    } else {
        cout << "Acesso negado";
    };
    return 0;
}