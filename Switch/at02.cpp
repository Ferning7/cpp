#include <string>
#include <iostream>
using namespace std;

void menu(){
    cout << "Escolha uma opção: \n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n:";
}

int main(){
    int esc, n1, n2;
    
    cout << "Digite 2 números: \n";
    cin >> n1;
    cin >> n2;
    
    menu();
    cin >> esc;
    
    switch(esc){
        case 1:
        cout << "Adição escolhida! " << n1 << " + " << n2 << " = " << n1 + n2;
        break;
        
        case 2:
        cout << "Subtração escolhida! " << n1 << " - " << n2 << " = " << n1 - n2;
        break;
        
        case 3:
        cout << "Multiplicação escolhida! " << n1 << " x " << n2 << " = " << n2 * n2;
        break;
        
        case 4:
        cout << "Divisão escolhida! " << n1 << " / " << n2 << " = " << n1 / n2;
        break;
    }
    
}