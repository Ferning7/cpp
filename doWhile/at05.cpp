#include <iostream>
using namespace std;

int main(){
    
    int seq, num, numNegativo;
    int i = 0;
    int soma = 0;
    
    cout << "Quantos números deseja somar: ";
    cin >> seq;
    
    cout << "Insira " << seq << " números:\n";
    
    do{
        cin >> num;
        i++;
    
        if (num < 0){
            i == seq;
            cout << "Número negativo inserido! ("<< num << ")\n";
            break;
            
        } else if (num <= 0){
            num = 0;
        };
    
        soma += num;
    } while (i < seq);
   
    cout << "Soma dos numeros (exceto negativo): " << soma;
    
    
    return 0;
}
