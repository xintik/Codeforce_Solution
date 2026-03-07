#include<bits/stdc++.h>
using namespace std;

long long solve() {
    int n;
cin >> n;
    string s;
   cin >> s;

  
    long long swaps_a = 0;
    int first_a = -1, last_a = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a') {
            if (first_a == -1) {
                first_a = i;
            }
            last_a = i;
        }
    }
    if (first_a != -1) {
        for (int i = first_a; i <= last_a; ++i) {
            if (s[i] == 'b') {
                swaps_a++;
            }
        }
    }

    
    long long swaps_b = 0;
    int first_b = -1, last_b = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'b') {
            if (first_b == -1) {
                first_b = i;
            }
            last_b = i;
        }
    }
    if (first_b != -1) {
        for (int i = first_b; i <= last_b; ++i) {
            if (s[i] == 'a') {
                swaps_b++;
            }
        }
    }

    return min(swaps_a, swaps_b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
    cout << solve() << "\n";
    }
    return 0;
}