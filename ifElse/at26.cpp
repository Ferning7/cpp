#include <string>
#include <iostream>
using namespace std;
int main()
{
    string word;
    cout << "Digite uma palavra: ";
    cin >> word;
    
    if(word.length() == 0){
        cout << "A palavra está vazia";
    } else {
        cout << "A palavra não é vazia";
    };
    return 0;
}