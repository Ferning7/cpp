#include <iostream>
using namespace std;

int main() {
    
    int num;
    int i = 1;
    
    
    cout << "Digite um numero inteiro positivo: ";
    cin >> num;
    
    
       
     while (i <= num){;
        cout << "\nTabuada do " << i<<":\n";
        for(int j = 1; j <= 10; j++){
            cout << i << " x " << j << " = " << i*j << "\n";
        }
        
        i++;
     }
    
    return 0;
}