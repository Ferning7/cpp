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
    int num1, num2;
    cout << "Digite dois numero: \n";
    cin >> num1;
    cin >> num2;
    
    if((num1 - num2) <= 10){
        cout << "a diferença é menor ou igual a 10";
    } else {
        cout << "não é menor ou igual a 10";
    };
    return 0;
}