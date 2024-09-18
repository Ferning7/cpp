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
    cout << "Insira sua idade: ";
    cin >> idd;
    cout << "Possui diploma de ensino superior? \n[1] Sim [2] Não\n:";
    cin >> esc;
    
    if(idd >= 21 && esc == 1){
        cout << "Parabéns, você está qualificado para a vaga!";
    } else {
        cout << "Desqualificado para a vaga";
    };
    return 0;
}