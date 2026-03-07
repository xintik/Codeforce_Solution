#include <iostream>
#include <vector>

using namespace std;

long long MOD = 1e9 + 7;
int L[300005], R[300005];
long long S[300005], tau[300005];


void compute_S(int u) {
    if (u == 0 || L[u] == 0) { 
        S[u] = 1;
        return;
    }
    compute_S(L[u]);
    compute_S(R[u]);
    S[u] = (3 + S[L[u]] + S[R[u]]) % MOD;
}

void compute_tau(int u, long long parent_tau) {
    tau[u] = parent_tau;
    if (L[u] != 0) {
        
        compute_tau(R[u], (tau[u] + 1) % MOD);
        
        compute_tau(L[u], (tau[u] + 3 + S[R[u]]) % MOD);
    }
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) cin >> L[i] >> R[i];

    compute_S(1); 
    tau[0] = 0;
    compute_tau(1, 1);

    for (int i = 1; i <= n; i++) cout << tau[i] << (i == n ? "" : " ");
    cout << endl;
}
int main()
{
    int t= 1;
    while(t--) solve();
}