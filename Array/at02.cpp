#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<double> numeros = {10.5, 20.3, 30.1, 40.4, 50.6};

    double soma = 0.0;
    int tamanho = numeros.size();

    for (int i = 0; i < tamanho; ++i) {
        soma += numeros[i];
        cout << numeros[i] << " \n";
    }

   
    double media = soma / tamanho;

    std::cout << "A média dos valores do vetor é: " << media << std::endl;

    return 0;
}