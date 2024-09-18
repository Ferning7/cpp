/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Digite tres numeros diferentes inteiros: \n";
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "z: ";
    cin >> z;
    
    if(x < y ||  x > z){
       cout << "O numero " << x << " é menor que " << y << " e maior que " << z;
    }else{
        cout << "bla";
    };
    

   

    return 0;
}