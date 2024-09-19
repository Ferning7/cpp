#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int NUM_MESAS = 30;
    const int CAPACIDADE_MESA = 5;
    vector<int> mesas(NUM_MESAS, CAPACIDADE_MESA);

    while (true) {
        int codigoMesa;
        int lugaresDesejados;

        cout << "Digite o código da mesa (100 a 129) ou 0 para sair: ";
        cin >> codigoMesa;

        if (codigoMesa == 0) {
            break;
        }

        if (codigoMesa < 100 || codigoMesa > 129) {
            cout << "Código inválido! Tente novamente." << endl;
            continue;
        }

        int indiceMesa = codigoMesa - 100;

        cout << "Digite a quantidade de lugares desejados (1 a 5): ";
        cin >> lugaresDesejados;

        if (lugaresDesejados < 1 || lugaresDesejados > 5) {
            cout << "Quantidade de lugares inválida! Tente novamente." << endl;
            continue;
        }

        if (lugaresDesejados > mesas[indiceMesa]) {
            cout << "Desculpe, não há lugares suficientes disponíveis nessa mesa." << endl;
        } else {
            mesas[indiceMesa] -= lugaresDesejados;
            cout << "Reserva realizada com sucesso!" << endl;
            cout << "Lugares restantes na mesa " << codigoMesa << ": " << mesas[indiceMesa] << endl;
        }
    }

    cout << "Sistema de reservas encerrado." << endl;
    return 0;
}
