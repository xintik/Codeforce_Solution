#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;  // you can change this to any prime

// Modular addition
long long mod_add(long long a, long long b, long long m = MOD) {
    return ((a % m) + (b % m)) % m;
}

// Modular subtraction
long long mod_sub(long long a, long long b, long long m = MOD) {
    return ((a % m) - (b % m) + m) % m;
}

// Modular multiplication
long long mod_mul(long long a, long long b, long long m = MOD) {
    return ((a % m) * (b % m)) % m;
}

// Modular exponentiation (binary exponentiation)
long long mod_pow(long long a, long long b, long long m = MOD) {
    long long res = 1;
    a %= m;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

// Modular inverse using Fermat's little theorem (mod must be prime)
long long mod_inv(long long a, long long m = MOD) {
    return mod_pow(a, m - 2, m);
}

// Modular division
long long mod_div(long long a, long long b, long long m = MOD) {
    return mod_mul(a, mod_inv(b, m), m);
}

int main() {
    long long a , b;
    cin >> a >> b;

    cout << "Addition: " << mod_add(a, b) << "\n";
    cout << "Subtraction: " << mod_sub(a, b) << "\n";
    cout << "Multiplication: " << mod_mul(a, b) << "\n";
    cout << "Division: " << mod_div(a, b) << "\n";  // computes a / b % MOD

    return 0;
}
