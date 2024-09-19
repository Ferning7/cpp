#include <iostream>
using namespace std;

int main() {
    

    int num, quant, soma;
    int i = 1;
    
    
    cout << "Quantos números deseja inserir? ";
    cin >> quant;
    
    cout << "Lendo " << quant << " números \n";
        
     while(i <= quant){
        cout << i << "° número: "; 
        cin >> num;
        soma += num;
        
        i++;
    };

    cout << "\nSoma de todos numeros: " << soma;
   
    
    return 0;
}