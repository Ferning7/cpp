#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string nomes[5];

    cout << "Digite 5 nomes:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nome " << (i + 1) << ": ";
        cin >> nomes[i];
    }

    sort(nomes, nomes + 5);

    cout << "\nNomes ordenados em ordem alfabética:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << nomes[i] << endl;
    }

    return 0;
}
