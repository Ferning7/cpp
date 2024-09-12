#include <iostream>
using namespace std;
void menu(){
    cout << "\n1. [Alta]\n2. [Baixa]\n3. [Média]\n:";
}

int main(){
    int esc;
    cout << "Escolha uma velocidade: ";
    menu();
    cin >> esc;
    
    switch(esc){
        case 1:
        cout << "Você está em alta velocidade!";
        break;
        case 2:
        cout << "Você está em baixa velocidade!";
        break;
        case 3:
        cout << "Você está em uma velocidade razoavel!";
        break;
    }

    return 0;
}