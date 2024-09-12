#include <string>
#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int num;
    int soma = 0;
    
    cout << "Insira um número inteiro positivo: ";
    cin >> num;
    
   for(int i = 1; i <= num; i++){
      soma += i;
   }
   
   cout << soma << "\n";
}