// Online C++ compiler to run C++ program online
#include <iostream>
// currently incomplete...

using namespace std;


struct HashTable {
    
    static const int N = 1e5 + 1, base = 67, max_string_length = 100;
    int htable[N], pw[max_string_length];
    
    HashTable() {
        pw[0] = 1;
        for(int i = 1; i < max_string_length; i++)
            pw[i] = (pw[i - 1] * 1LL * base) % N;
    }
  
    int hash(int x) {
        int h = 0;
        for(int b = 0; x > 0; b++, x /= 10)
            h = (h + (x % 10) * 1LL * pw[b]) % N;
        return h;
    }
    void insert(int x) {
        htable[hash(x)]++;
    }
    int get(int x) {
        return htable[hash(x)];
    }
    
};

int main() {
    // Write C++ code here
    // std::cout << "Hello wo/rld!";

    

    return 0;
}
