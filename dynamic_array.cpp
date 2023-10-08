// Online C++ compiler to run C++ program online
// basically new bigger size array 
#include <iostream>

using namespace std;

const int N = 1e5 + 1;

int htabe[N];

int main() {
    // Write C++ code here
    // std::cout << "Hello wo/rld!";

    int *dynamic = new int[5];
    
    // assignment
    for(int i = 0; i < 5; i++)
        dynamic[i] = rand() % 100; 
    for(int i = 0; i < 5; i++)
        cout << dynamic[i] << " \n"[i == 4];
    
    // expand
    int *new_dynamic = new int[10];
    for(int i = 0; i < 5; i++)  new_dynamic[i] = dynamic[i];
    delete[] dynamic;
    dynamic = new_dynamic;
    
    // new items
    for(int i = 5; i < 10; i++)
        dynamic[i] = rand() % 200;
        
    // pring new
    cout << endl;
    for(int i = 0; i < 10; i++)
        cout << dynamic[i] << ' ';
    return 0;
}
