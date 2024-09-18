/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Digite dois numeros diferentes inteiros: \n";
    cin >> x;
    cin >> y;
    
    if(x < y){
       cout << "O numero " << x << " é menor que " << y;
    } else{
       cout << "Não é menor";
    };

    return 0;
}