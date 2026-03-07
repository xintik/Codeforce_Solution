#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        if(a + b > n) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        vector<int> p1(n), p2(n);
        iota(p1.begin(), p1.end(), 1);
        iota(p2.begin(), p2.end(), 1);

        // Make player1 win 'a' times → shift p2 right by 'a'
        rotate(p2.begin(), p2.begin() + (n - a), p2.end());

        // Make player2 win 'b' times → shift p1 right by 'b'
        rotate(p1.begin(), p1.begin() + (n - b), p1.end());

        for (int x : p1) cout << x << " ";
        cout << "\n";
        for (int x : p2) cout << x << " ";
        cout << "\n";
    }
}
