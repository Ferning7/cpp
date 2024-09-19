
#include <iostream>
using namespace std;

int main()
{
    int Tentativa, senha;
    int i = 1;
    
    
    cout << "Crie uma senha: ";
    cin >> senha;
    
    cout << "Digite sua senha: ";
    cin >> Tentativa;
        
    
    while (i < 3){
        if(Tentativa != senha && i < 3){
            cout << "Senha incorreta, tente novamente: ";
            cin >> Tentativa;
        }
            if (Tentativa == senha){
                cout << "Senha correta!";
                break;
            } 
            i++;
        }
           
    }


