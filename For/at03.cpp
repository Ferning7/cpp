#include <string>
#include <iostream>
#include <cmath>
using namespace std;


int main(){
    string word;
    
    cout << "Insira uma palavra: ";
    cin >> word;
    
   for(int i = 0; i <= word.length(); i++){
       cout << word[i] << "\n";
   }
}