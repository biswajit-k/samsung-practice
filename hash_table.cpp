// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_set>
#include<string>
// hash for strings

using namespace std;

struct HashTable {
    
    static const int N = 1e5 + 3, base = 31, max_string_length = 100;
    int htable[N], pw[max_string_length];
    
    HashTable() {
        pw[0] = 1;
        for(int i = 1; i < max_string_length; i++)
            pw[i] = (pw[i - 1] * 1LL * base) % N;
    }
  
    unsigned hash(const char* x)
    {
        int h = 0;
        for(int i = 0; x[i]; i++)
            h = (h + (x[i] * pw[i])) % N;
        return h;
    }

    void insert(char* x) {
        htable[hash(x)]++;
    }

    int get(char* x) {
        return htable[hash(x)];
    }
    
};

int main() {
    
    int cnt = 10000;
    
    HashTable table;
    unordered_set<string> taken;
    
    int hits = 0;
    
    for(int i = 0; i < cnt; i++)
    {
        char str[11];
        string copy;
        bool unique = false;
        while(!unique)
        {
            for(int j = 0; j < 10; j++)
                str[j] = ('a' + (rand() % 26));
            
            copy = str;
            unique = (taken.count(copy) == 0);
        }

        taken.insert(copy);
        table.insert(str);

        if(table.get(str) > 1)
            hits++;
    }
    
    cout << hits << '\n';            // approx 600 for 10000 - kinda okay
    
    return 0;
}
