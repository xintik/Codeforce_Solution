#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, m;
    cin >> n >> m;
    
   int cnt = 0;
    vector<vector<int>> grid(n, vector<int>(m));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
           
           cnt += grid[i][j];
        }
    }
    
    int col ;
    int k = 0;
    for(int j = 0; j < m; j++)
    {
        for(int i = 0; i < n; i++)
        {
           // cout << grid[i][j] << " ";
            k++;
        }
        if(k >= cnt) {
            col = j;
            break;
        }
    }
    int extraone = k - cnt;
    int pos ;
   for(pos = 0 ; pos <  n ; pos++)
   {
       extraone = extraone - grid[pos][col];
       if(extraone == 0) break;
   }
   int a = cnt / 2;
   int b = (cnt+1)/2;
   cout << a * b<< endl;
   for(int i = 0; i < col ; i++) cout << "R";
    for(int i = 0; i < pos; i++) cout << "D";
       if(pos < m ) cout << "R";
    for(int i = pos ; i < n; i++) cout << "D";
        for(int i = col ; i < m; i++) cout << "R";
            cout << endl;
   
}

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}