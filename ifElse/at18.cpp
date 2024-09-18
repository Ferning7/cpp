/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int add;
    cout << "Escolha um adicional para seu café:\n[1]Açúcar [2] Leite\n:";
    cin >> add;
    
    if(add == 1){
        cout << "Café com açúcar preparado!";
    } else{
        cout << "Café com leite preparado!";
    };
    return 0;
}