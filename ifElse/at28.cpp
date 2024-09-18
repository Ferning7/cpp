#include <string>
#include <iostream>
using namespace std;
int main()
{
    int l1, l2, l3;
    cout << "Digite os lados de um triangulo\n";
    cout << "Lado 1: ";
    cin >> l1;
    
    cout << "Lado 2: ";
    cin >> l2;
    
    cout << "Lado 3: ";
    cin >> l3;
    
    
    if(l1 == l2 && l2 == l3){
        cout << "Triângulo equilátero";
    } else if (l1 == l2 || l2 == l3 || l1 == l3){
        cout << "Triângulo isóceles";
    } else if (l1 != l2 && l2 != l3){
        cout << "Triângulo escaleno";
    };
    return 0;
}