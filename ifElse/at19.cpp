/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Insira um número inteiro: ";
    cin >> num;
    
    if (num %3 == 0 || num %5 == 0){
        cout << "O número é divisível por 3 OU por 5!";
    };
    return 0;
}