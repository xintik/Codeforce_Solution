#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // We count 'survivors' (elements we don't remove)
    vector<bool> is_survivor(n, false);
    int count = 0;

    // 1. Mark elements that are part of the ascending 'front'
    int left_max = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > left_max) {
            left_max = a[i];
            if (!is_survivor[i]) {
                is_survivor[i] = true;
                count++;
            }
        }
    }

    // 2. Mark elements that are part of the descending 'back'
    int right_max = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] > right_max) {
            right_max = a[i];
            if (!is_survivor[i]) {
                is_survivor[i] = true;
                count++;
            }
        }
    }

    // The answer is the total elements minus the ones we kept
    cout << n - count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}