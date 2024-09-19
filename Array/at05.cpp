#include <iostream>

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

    std::cout << "Vetor ordenado em ordem decrescente: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
