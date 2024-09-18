#include <string>
#include <iostream>
using namespace std;
int main()
{
    int esc;
    cout << "Você é um robô? \n[1] Sim [2] Não\n";
    cin >> esc;
    
    if(esc == 2){
        cout << "Por favor, prove que você não é um robô";
    } else {
        cout << "Bip bop bup";
    };

    return 0;
}