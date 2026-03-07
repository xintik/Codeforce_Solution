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
    	
        if (i <= r)
            z[i] = min(r - i + 1, z[i - l]);
        
        while (i + z[i] < n && str[z[i]] == str[i + z[i]])
            z[i]++;

        if (i + z[i] - 1 > r) {
            l = i;
            r = i + z[i] - 1;
        }
    }
  
    for(int i = 0; i < n; i++)
    {
        cout << z[i] <<" ";
       
    }

    cout << endl;  
}
