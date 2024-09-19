#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int arei[9];
    
    for(int i = 0; i < 10; i++){
        arei[i] = rand() % 20 + 1;
           cout << arei[i] << "  "; 
    }

    
    return 0;
}