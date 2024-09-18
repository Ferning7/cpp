/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int esc;
    cout << "[1] Janeiro ";
    cout << "[2] Fevereiro ";
    cout << "[3] Março ";
    cout << "[4] Abril ";
    cout << "[5] Maio \n";
    cout << "[6] Junho ";
    cout << "[7] Julho ";
    cout << "[8] Agosto ";
    cout << "[9] Setembro \n";
    cout << "[10] Outubro ";
    cout << "[11] Novmebro ";
    cout << "[12] Dezembro \n";
    cout << "Escolha o numero de um mês para saber quantos dias ele tem: \n";
    cin >> esc;
    
    if(esc == 1){
        cout << "Janeiro tem 31 dias";
    } else if(esc == 2){
        cout << "Fevereiro tem 28 dias (29 em ano bissexto)";
    } else if(esc == 3){
        cout << "Março tem 31 dias";
    } else if(esc == 4){
        cout << "Abril tem 30 dias";
    } else if(esc == 5){
        cout << "Maio tem 31 dias";
    } else if(esc == 6){
        cout << "Junho tem 30 dias";
    } else if(esc == 7){
        cout << "Julho tem 31 dias";
    }else if(esc == 8){
        cout << "Agosto tem 31 dias";
    } else if(esc == 9){
        cout << "Setembro tem 30";
    } else if(esc == 10){
        cout << "Outubro tem 31";
    } else if(esc == 11){
        cout << "Novembro tem 30";
    } else if(esc == 12){
        cout << "Dezembro tem 31";
    };
    return 0;
}