#include <iostream>
using namespace std;


    bool ehPrimo(int num) {
        if (num <= 1) return false;
        for (int i = 2; i <= num / 2; i++) { 
            if (num % i == 0) {
                return false; 
            }
        }
        return true; 
    }

    int main() {
        int numero;
        cout << "Insira um número inteiro: ";
        cin >> numero;
    
        if (ehPrimo(numero)) {
            cout << numero << " é um número primo." << endl;
        } else {
            cout << numero << " não é um número primo." << endl;
        }
    
        return 0;
    }