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
    int esc, din;
    cout << "Deseja comprar um carro novo?\n[1] Sim [2] Não\n:";
    cin >> esc;
    cout << "Você tem dinheiro suficiente? \n[1] Sim [2] Não\n:";
    cin >> din;
    
    if(din == 1 && esc){
     cout << "Parabéns, você pode comprar um carro novo!"; 
    } else {
        cout << "Você não pode comprar um carro";
    };
    
 
    return 0;
}