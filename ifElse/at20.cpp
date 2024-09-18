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
    string esc;
    cout << "Deseja comprar um Monitor 144hz 1ms?\n";
    cin >> esc;
    
    if(esc == "Sim" || esc == "sim"){
        cout << "Obrigado pela compra!";
    } else {
        cout << "Compre algo!";
    }
    return 0;
}