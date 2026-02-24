#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);
    set < ll > st;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        st.insert(a[i]);
    }

    
    

    if (st.size() == 1) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    int diffNode = -1;

    for (int i = 1; i < n; i++) {
        if (a[i] != a[0]) {
            cout << 1 << " " << i + 1 << "\n";
            if (diffNode == -1) diffNode = i + 1;
        }
    }

    
    for (int i = 1; i < n; i++) {
        if (a[i] == a[0]) {
            cout << diffNode << " " << i + 1 << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
