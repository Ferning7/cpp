#include <iostream>
using namespace std;

int main() {
   
int num;

    cout << "Insira um número inteiro positivo: \n";
    cin >> num;
    
    cout << "Os divisores de " << num << " são: \n";
    
    for(int i = 1; i <= num; i++){
       if (num % i == 0){
           cout << i << " ";
       }
    
    }
    return 0;
}