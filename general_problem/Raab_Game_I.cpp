#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        if( (a + b > n ) || (min(a , b) == 0 && max(a,b) > 0) ){
            cout << "NO\n";
            continue;
        }
      
       cout << "YES\n";
       for(int i = 1 ; i <= n; i++)
       {
        cout << i << " ";
       }
       cout << "\n";
       for(int i = 1; i <= n; i++)
       {
        if(i <= b) cout << i+b << " ";
        else if(i<=a+b) cout << i - b << " ";
        else cout << i << " ";
       }
       cout << "\n";
       return 0;
   }
}
     

