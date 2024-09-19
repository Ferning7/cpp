#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros = {5, 10, 3, 20, 15};
    int menorValor = numeros[0];

    for (size_t i = 1; i < numeros.size(); ++i) {
        if (numeros[i] < menorValor) {
            menorValor = numeros[i];
        }
    }

    cout << "O menor valor no vetor é: " << menorValor << endl;
    return 0;
}