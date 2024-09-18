#include <iostream>
using namespace std;

int main() {
   

    cout << "Tabuada do 5 até o 10\n";
    
    for(int i = 5; i <= 10; i++){
        cout << "Tabuada do " << i << ": \n";
        
        for (int j = 1; j <= 10; j++){
            cout << i << "x" << j << " = " << i * j << "\n";
            
        }
        cout << " ";
    }
    
    
    return 0;
}