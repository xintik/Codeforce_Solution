#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9 + 7;
const int N = 1000000;

ll fact[N + 1];
ll invFact[N + 1];


// Fast Power (Binary Exponentiation)
ll power(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}


// Precompute factorial and inverse factorial
void precompute() {
    fact[0] = 1; // store the value of n! 
    for (int i = 1; i <= N; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }

    // Fermat inverse of N!
    invFact[N] = power(fact[N], MOD - 2); // store the value of n!^-1

    for (int i = N; i > 0; i--) {
        invFact[i - 1] = (invFact[i] * i) % MOD;
    }

    
}


// nPr function
ll nPr(int n, int r) {
    if (r > n) return 0;
    return (fact[n] * invFact[n - r]) % MOD;
}

ll nCr (int n , int r)
{
      if (r < 0 || r > n) return 0;
    
    return (((fact[n] * invFact[r]) % MOD) * invFact[n - r]) % MOD;
}


int main() {
    precompute();
   // n! = npn 
    int n, r;
    cin >> n >> r;

    cout << nPr(n, r) << endl;
    cout << nCr(n , r) << endl;
    cout << 15 * 120 << endl;

    return 0;
}