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
    int num;
    cout << "Digite um numero: \n";
    cin >> num;
    
    if(num > 0){
        cout << "O numero é positivo";
    } else{
        cout << "O numero é negativo";
    };
    return 0;
}