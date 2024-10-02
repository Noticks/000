#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main() {
    
    srand(time(0)); 

    int numbers[20]; 

    for (int i = 0; i < 20; ++i) {
        numbers[i] = rand() % 16 - 5; 
    }

    for (int i = 0; i < 20; ++i) {
        cout << numbers[i] << " "; 
        if ((i + 1) % 10 == 0) { 
            cout << endl; 
        }
    }
    return 0; 
}


