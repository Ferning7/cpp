#include <string>
#include <iostream>
using namespace std;

void menu(){
    cout << "Escolha um dia: \n1. [Segunda-Feira]\n2. [Terça-Feira]\n3. [Quarta-Feira]\n4. [Quinta-Feira]\n5. [Sexta-Feira]\n";
    cout << "6. [Sábado]\n7. [Domingo]\n";
}

int main(){
    int esc;
    
    menu();
    cin >> esc;
    
    switch(esc){
        case 1:
        cout << "Segunda-Feira, dia útil";
        break;
        
        case 2:
        cout << "Terça-Feira, dia útil";
        break;
        
        case 3:
        cout << "Quarta-Feira, dia útil";
        break;
        
        case 4:
        cout << "Quinta-Feira, dia útil";
        break;
        
        case 5:
        cout << "Sexta-Feira, dia útil";
        break;
        
        case 6:
        cout << "Sábado, fim de semana";
        break;
        
        case 7:
        cout << "Domingo, fim de semana";
        break;
    }
    
}