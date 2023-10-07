//https://www.thejoboverflow.com/p/p2072/
#include <iostream>


int main() {
    
    using namespace std;
    
    int t;
    cin >> t;
    
    for(int tt = 1; tt <= t; tt++)
    {
        int n, m, k;
        cin >> m >> n >> k;
        
        int a[n][m];
        
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                cin >> a[j][i];
                
        int ans = 0;
        
        for(int i = 0; i < n; i++)
        {
            int count = 1;
            for(int j = i + 1; j < n; j++)
            {
                bool same = true;
                for(int k = 0; k < m; k++)
                    same &= (a[i][k] == a[j][k]);
                    
                if(same)
                    count++;
            }
            int empty = 0;
            for(int j = 0; j < m; j++)
                empty += (a[i][j] == 0);
            
            if(k >= empty && ((k - empty) % 2 == 0))
                ans = max(ans, count);
        }
        
        cout << "#" << tt << ' ' << ans << '\n';
    }
    
    return 0;
}
