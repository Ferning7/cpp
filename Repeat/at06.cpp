#include <iostream>
using namespace std;

int main() {
    
    int num;
    int i = 1;
    
    
    cout << "Digite um numero inteiro positivo: ";
    cin >> num;
    
    while (i <= num){
     cout << i << " ";
       i += 2;
    }

    
    return 0;
}