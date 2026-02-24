#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
      
        vector<int> cnt(n + 1, 0);
        for (int x : b) {
            cnt[x]++;
        }
        
        // Step 2: Check feasibility
        bool possible = true;
        for (int m = 1; m <= n; m++) {
            if (cnt[m] % m != 0) {
                possible = false;
                break;
            }
        }
        
        if (!possible) {
            cout << "-1\n";
            continue;
        }
        
        
        vector<int> a(n);
        int current_value = 1; 
        for (int m = 1; m <= n; m++) {
            if (cnt[m] == 0) continue;
            int num_values = cnt[m] / m; 
            for (int j = 0; j < n && cnt[m] > 0; j++) {
                if (b[j] == m) {
                    a[j] = current_value;
                    cnt[m]--;
                    if (cnt[m] % m == 0) {
                        current_value++; 
                    }
                }
            }
        }
        
        // Step 4: Output the result
        for (int x : a) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}