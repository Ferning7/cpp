#include <iostream>
using namespace std;

int main() {
    int n, numero, maior;

    cout << "Quantos números você deseja inserir? ";
    cin >> n;

    cout << "Insira o primeiro número: ";
    cin >> maior; 

    for (int i = 1; i < n; i++) {
        cout << "Insira o próximo número: ";
        cin >> numero;

        if (numero > maior) {
            maior = numero; // Atualiza o maior número
        }
    }

    cout << "O maior número inserido foi: " << maior;

    return 0;
}