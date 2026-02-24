#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;
    int n = str.size();
    vector<int> z(n, 0);

    int l = 0, r = 0;
    for (int i = 1; i < n; i++) {
        // if in the [l , r ] interval than don't rechack it just copy the previous value
        // copy number is z[i-l] but if the number is repeted like ababaadef 
        // r - i + 1 represend the minimum boundery 
        if (i <= r)
            z[i] = min(r - i + 1, z[i - l]);
        
       // look for the more batch beyond the current 
        while (i + z[i] < n && str[z[i]] == str[i + z[i]])
            z[i]++;

        if (i + z[i] - 1 > r) {
            l = i;
            r = i + z[i] - 1;
        }
    }

    
    vector < int > ans;
    for (int i = 0; i < n; i++)
       {
        if(z[i] == n - i)
            cout << i << " ";
       }
      cout << n << endl;
}
