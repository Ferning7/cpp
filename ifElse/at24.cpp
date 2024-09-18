#include <string>
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Digite um número: ";
    cin >> num;
    
    if(num == 0){
        cout << "É igual a zero";
    } else {
        cout << "Não é igual a zero";
    };

    return 0;
}