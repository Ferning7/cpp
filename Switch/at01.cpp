#include <string>
#include <iostream>
using namespace std;

void menu(){
    cout << "Escolha um horário:\n1. [05:00 - 12:00]\n2. [12:00 - 18:00]\n3. [18:00 - 00:00]\n:";
}

int main(){
    int esc;
    
    menu();
    cin >> esc;
    
    if(esc == 1){
        cout << "Bom dia mofí!";
    } else if (esc == 2){
        cout << "Boa tarde ze!";
    } else if (esc == 3){
        cout << "Boa noite jogador!";
    };
}