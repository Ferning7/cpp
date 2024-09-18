#include <iostream>
using namespace std;

int main() {
    
    int num;
    int i = 1;
    
    
    cout << "Digite um numero inteiro positivo: ";
    cin >> num;
    
     do {
        cout << i << " ";
        i += 2;
    } while (i <= num);

    
    return 0;
}