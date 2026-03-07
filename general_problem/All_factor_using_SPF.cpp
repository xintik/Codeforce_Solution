#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1000000;
vector<int> spf(N + 1);

// Step 1: Build SPF (Smallest Prime Factor)
void buildSPF() {
    for (int i = 1; i <= N; i++) spf[i] = i;

    for (int i = 2; i * i <= N; i++) {
        if (spf[i] == i) { // i is prime
            for (int j = i * i; j <= N; j += i) {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

// Step 2: Get prime factors of n using SPF
vector<int> getPrimeFactors(int n) {
    vector<int> factors;
    while (n != 1) {
        factors.push_back(spf[n]);
        n /= spf[n];
    }
    return factors;
}

// Step 3: Generate all divisors recursively
void generateDivisors(vector<pair<int,int>>& primes, int idx, ll current, vector<ll>& divisors) {
    if (idx == primes.size()) {
        divisors.push_back(current);
        return;
    }

    int p = primes[idx].first;
    int cnt = primes[idx].second;

    for (int i = 0; i <= cnt; i++) {
        generateDivisors(primes, idx + 1, current, divisors);
        current *= p;
    }
}

// Step 4: Get all divisors of n
vector<ll> getAllDivisors(int n) {
    vector<int> factors = getPrimeFactors(n);

    // Count powers of each prime
    map<int,int> mp;
    for (auto p : factors) mp[p]++;

    vector<pair<int,int>> primes;
    for (auto &x : mp) primes.push_back(x);

    vector<ll> divisors;
    generateDivisors(primes, 0, 1, divisors);

    sort(divisors.begin(), divisors.end());
    return divisors;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    buildSPF();

    int n;
    cin >> n;

    vector<ll> divisors = getAllDivisors(n);

    
    for (auto f : divisors) cout << f << " ";
    cout << "\n";
}