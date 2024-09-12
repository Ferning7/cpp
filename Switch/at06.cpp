#include <iostream>
using namespace std;
void menu(){
    cout << "\n1. [Tamanho P]\n2. [Tamanho M]\n3. [Tamanho G]\n:";
}

int main(){
    int esc;
    cout << "Escolha um tamanho: ";
    menu();
    cin >> esc;
    
    switch(esc){
        case 1:
        cout << "Tamanho P - R$30,00";
        break;
        case 2:
        cout << "Tamanho M - R$44,00";
        break;
        case 3:
        cout << "Tamanho G - R$58,90";
        break;
    }

    return 0;
}