#include <iostream>
using namespace std;

int main() {
    int soma = 0;
    
    cout << "Soma dos números pares entre 1 e 100: \n";

    for(int i = 1; i <= 100; i++){
        if (i%2 == 0){
            soma += i;
            
        }
        
    }
   cout << soma;
    return 0;
}