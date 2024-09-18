/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int idd;
    string nome;
    
    cout << "Digite seu nome: ";
    cin >> nome;
    
    
    if(nome.length() == 3){
    cout << "Digite sua idade: ";
    cin >> idd;
    
    if(idd >= 18){
      cout << "Acesso permitido!";
    } else {
        cout << "Acesso negado!";
    }
    };
}