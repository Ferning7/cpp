#include <iostream>
using namespace std;
void menu(){
    cout << "\n1. [Saque]\n2. [Inglês/English]\n:";
}

int main(){
    int esc;
    cout << "Escolha uma operação: ";
    menu();
    cin >> esc;
    
    switch(esc){
        case 1:
        cout << "Bem-vindo(a)!";
        break;
        case 2:
        cout << "Welcome!";
        break;
    }

    return 0;
}