/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int sub, esc;
    cout << "Você possui assinatura na Prime Video? \n[1] Sim [2] Não\n: ";
    cin >> sub;
    if(sub == 2){
        cout << "Te lasque";
    };
    
    if(sub == 1){
    cout << "Já assistiu The Boys? \n[1] Sim [2] Não\n:";
    cin >> esc;
    
    if(sub == 1 && esc == 1){
        cout << "Ótimo, agora você pode assistir à nova temporada!";
    } else {
        cout << "te lasque";
    };
    return 0;
}
}