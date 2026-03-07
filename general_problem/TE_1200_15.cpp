#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
    }

    
    if (total_sum < s) {
        cout << -1 << endl;
        return;
    }
   
    if (total_sum == s) {
        cout << 0 << endl;
        return;
    }

    int max_len = 0;
    int current_sum = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {
        current_sum += a[right];

       
        while (current_sum > s) {
            current_sum -= a[left];
            left++;
        }

     
        if (current_sum == s) {
            max_len = max(max_len, right - left + 1);
        }
    }

   
    cout << n - max_len << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}