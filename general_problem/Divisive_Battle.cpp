#include<bits/stdc++.h>
using namespace std;





void solve() {

    int n;
    cin >> n;
    vector < int > a(n);
    bool ans = true;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        
    }
    if(std::is_sorted(a.begin(), a.end())) {
    cout << "Bob\n";
    return;
}

    vector < int > final;

    for (int& x : a) {
    vector<int> primes;

    if (x == 1)
        primes = {1};

    for (int y = 2; y * y <= x; ++y)
        while (x % y == 0) {
            primes.push_back(y);
            x /= y;
        }

    if (x != 1)
        primes.push_back(x);

    final.insert(final.end(), primes.rbegin(), primes.rend());
    }
   if(std::is_sorted(final.begin(), final.end())) {
    cout << "Bob\n";
    return;
  }
  cout << "Alice\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}