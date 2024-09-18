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
    double num1, num2;
    cout << "Digite dois numeros reais: \n";
    cin >> num1;
    cin >> num2;
    
    if(num1 < num2){
        cout << "O primeiro numero é menor que o segundo";
    } else if (num1 == num2) {
        cout << "O primeiro numero é igual ao segundo";
    } else{
        cout << "não é igual ou menor";
    };
    return 0;
}