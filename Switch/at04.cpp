/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
void menu(){
    cout << "\n1. [Cachorro]\n2. [Gato]\n3. [Pássaro]\n:";
}

int main(){
    int esc;
    cout << "Escolha uma opção: ";
    menu();
    cin >> esc;
    
    switch(esc){
        case 1:
        cout << "Opção Cachorro foi escolhido!";
        break;
        case 2:
        cout << "Opção Gato foi escolhido!";
        break;
        cout << "Opção Pássaro foi escolhido!";
        break;
    }

    return 0;
}