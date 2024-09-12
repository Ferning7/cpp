#include <iostream>
using namespace std;
void menu(){
    cout << "\n1. [Saque]\n2. [Depósito]\n3. [Consulta de saldo]\n:";
}

int main(){
    int esc;
    cout << "Escolha uma operação: ";
    menu();
    cin >> esc;
    
    switch(esc){
        case 1:
        cout << "Saque realizado!";
        break;
        case 2:
        cout << "Depósito realizado!";
        break;
        case 3:
        cout << "Consulta de Saldo\nAtualmente: R$17.807,29";
        break;
    }

    return 0;
}