#include <iostream>

using namespace std;

int main() {
    const int NUM_MERCADORIAS = 100;
    double precoCompra, precoVenda;
    int lucroMenor10 = 0, lucroEntre10e20 = 0, lucroMaior20 = 0;

    for (int i = 0; i < NUM_MERCADORIAS; i++) {
        cout << "Mercadoria " << (i + 1) << "\n";
        cout << "Digite o preço de compra da mercadoria: R$";
        cin >> precoCompra;
        cout << "Digite o preço de venda da mercadoria: R$";
        cin >> precoVenda;
        cout << "\n";
       

        double lucro = (precoVenda - precoCompra) / precoCompra * 100;

        if (lucro < 10) {
            lucroMenor10++;
        } else if (lucro <= 20) {
            lucroEntre10e20++;
        } else {
            lucroMaior20++;
        }
    }

    cout << "Mercadorias com lucro < 10%: " << lucroMenor10 << endl;
    cout << "Mercadorias com 10% <= lucro <= 20%: " << lucroEntre10e20 << endl;
    cout << "Mercadorias com lucro > 20%: " << lucroMaior20 << endl;

    return 0;
}
