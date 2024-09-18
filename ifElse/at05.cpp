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
    cout << "Digite tres numeros diferentes inteiros: \n";
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    
    if(x > y){
       cout << "O numero " << x << " é maior que " << y;
    } else if (x == y){
        cout << "São iguais";
    }
    else{
        cout << "Não é maior ou igual";
    };
    

   

    return 0;
}