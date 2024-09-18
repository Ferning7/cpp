#include <string>
#include <iostream>
using namespace std;
int main()
{
    int word;
    cout << "Não deseja cancelar a compra?\n[1]Sim [2]Não\n";
    cin >> word;
    
    if(word == 2){
        cout << "Por favor, confirme o cancelamento da operação";
    } else {
        cout << "Continue";
    };
    return 0;
}