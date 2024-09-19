#include <iostream>

using namespace std;

int main() {
    int vetor[] = {5, 2, 8, 1, 4};
    int tamanho = 5;

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho - 1; j++) {
            if (vetor[j] < vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    cout << "Vetor ordenado em ordem decrescente: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
