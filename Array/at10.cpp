#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int NUM_COUNT = 100;
    vector<double> numeros(NUM_COUNT);
    double soma = 0.0;

    for (int i = 0; i < NUM_COUNT; i++) {
        cout << "Digite o número " << (i + 1) << ": ";
        cin >> numeros[i];
        soma += numeros[i];
    }

    double media = soma / NUM_COUNT;
    int iguaisA30 = 0, maioresQueMedia = 0, iguaisAMedia = 0;

    for (double num : numeros) {
        if (num == 30) {
            iguaisA30++;
        }
        if (num > media) {
            maioresQueMedia++;
        }
        if (num == media) {
            iguaisAMedia++;
        }
    }

    cout << "Números iguais a 30: " << iguaisA30 << endl;
    cout << "Números maiores que a média: " << maioresQueMedia 
