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
    int idd, esc;
    cout << "Escreva sua idade: ";
    cin >> idd;
    cout << "Possui CNH?";
    cout << "\n[1] Sim [2] Não\n";
    cin >> esc;
    
    if(esc = 1 && idd >= 18){
        cout << "Você pode dirigir";
    } else {
        cout << "Você não pode dirigir";
    };
 
    return 0;
}