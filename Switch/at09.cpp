#include <string>
#include <iostream>
using namespace std;

void meses(){
    cout << "Opções: \n1. [Janeiro]\n2. [Fevereiro]\n3. [Março]\n4. [Abril]\n5. [Maio]\n";
    cout << "6. [Junho]\n7. [Julho]\n8. [Agosto]\n9. [Setembro]\n10. [Outubro]\n11. [Novembro]\n12. [Dezembro]\n";

}

int main()
{
    int esc;
    
    meses();
    
    cout << "escolha um mês acima: ";
    cin >> esc;
    
    switch(esc){
        case 1: 
        cout << "Janeiro tem 31 dias!";
        break;
        
        case 2:
        cout << "Fevereiro tem 28 dias! (29 dias em anos Bissextos)";
        break;
         
        case 3:
        cout << "Março tem 31 dias!";
        break;
         
        case 4:
        cout << "Abril tem 30 dias!";
        break;
         
        case 5:
        cout << "Maio tem 31 dias!";
        break;
         
        case 6:
        cout << "Junho tem 30 dias!";
        break;
         
        case 7:
        cout << "Julho tem 31 dias!";
        break;
         
        case 8:
        cout << "Agosto tem 31 dias!";
        break;
         
        case 9:
        cout << "Setembro tem 30 dias!";
        break;
         
        case 10:
        cout << "Outubro tem 31 dias!";
        break;
         
        case 11:
        cout << "Novembro tem 30 dias!";
        break;
         
        case 12:
        cout << "Dezembro tem 31 dias!";
        break;
    }
    
    return 0;
}