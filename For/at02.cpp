#include <string>
#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int num;
    cout << "Insira um número inteiro: ";
    cin >> num;
    
   for(int i = 0; i < num; i++){
       if (i%2==0){
           cout << i<<"\n";
       } 
   }
}