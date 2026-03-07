#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N = 50;
     vector<vector<int>> factors(N + 1);

    for(int i = 1; i <= N; i++) {
        for(int j = i; j <= N; j += i) {
            factors[j].push_back(i);
        }
    }
    for(int i = 1; i <=N; i++)
    {    
        cout << i << " : "; 
        for(auto &it : factors[i]) cout << it << " ";

            cout << endl;

    }

    return 0;
   
}

