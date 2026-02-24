#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int test = 0; test < t; ++test) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<ll> robots(n);
        for (auto &p : robots) cin >> p;

        set<ll> spikes;
        for (int i = 0; i < m; ++i) {
            ll p; cin >> p;
            spikes.insert(p);
        }

        string s;
        cin >> s;

        vector<ll> pref(k + 1, 0);
        for (int i = 1; i <= k; ++i) {
            pref[i] = pref[i - 1] + (s[i - 1] == 'R' ? 1LL : -1LL);
        }

        vector<int> death(n, k + 1);

        for (int i = 0; i < n; ++i) {
            ll r = robots[i];
            for (int j = 1; j <= k; ++j) {
                if (spikes.count(r + pref[j])) {
                    death[i] = j;
                    break;
                }
            }
        }

        vector<int> alive(k + 1, n);
        for (int tm = 1; tm <= k; ++tm) {
            alive[tm] = alive[tm - 1];
            for (int r = 0; r < n; ++r) {
                if (death[r] == tm) {
                    alive[tm]--;
                }
            }
        }

        for (int i = 1; i <= k; ++i) {
            cout << alive[i] << (i < k ? " " : "\n");
        }
    }

    return 0;
}