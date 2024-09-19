#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros = {5, 10, 3, 20, 15};
    int maiorValor = numeros[0];

    for (size_t i = 1; i < numeros.size(); ++i) {
        if (numeros[i] > maiorValor) {
            maiorValor = numeros[i];
        }
    }

    cout << "O maior valor no vetor é: " << maiorValor << endl;
    return 0;
}