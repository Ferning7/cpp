/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <cmath>

int main()
{
   int num;
   cout << "Digite um numero inteiro para identificar se e par ou impar:\n";
   cin >> num;
   
   if(num % 2==0){
       cout << "Par";
   } else {
       cout << "Impar";
   }
    return 0;
}