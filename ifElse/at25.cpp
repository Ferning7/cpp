#include <string>
#include <iostream>
using namespace std;
int main()
{
    int esc;
    
    cout << "Você é um membro inativo do Clube Interroga?\n[1] Sim [2] Não\n";
    cin >> esc;
    
    if (esc == 1){
        cout << "ótimo, prossiga";
    } else {
        cout << "Por favor, atualize sua inscrição para continuar usufruindo dos benefícios do clube";
    };
    return 0;
}