
#include <iostream>
using namespace std;

int main()
{
    int Tentativa, senha;
    int i = 0;
    
    
    cout << "Crie uma senha: ";
    cin >> senha;
    
    cout << "Digite sua senha: ";
    cin >> Tentativa;
        
    if(Tentativa != senha){
        i = 1;
        
        do{
            cout << "Senha incorreta, tente novamente: ";
            cin >> Tentativa;
            
            if (Tentativa == senha){
                cout << "Senha correta!";
                break;
            } 
            i++;
        }  while (i < 3);
           
    }
    
}