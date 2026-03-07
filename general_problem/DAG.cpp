#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Para {
    long long a, b, c;
};

bool is_below(Para f1, Para f2) {
    long long da = f1.a - f2.a;
    long long db = f1.b - f2.b;
    long long dc = f1.c - f2.c;
    
    if (da == 0) return (db == 0 && dc < 0);
    
   
    __int128 D = (__int128)db * db - 4 * (__int128)da * dc;
    
   
    return (D < 0 && da < 0);
}

void solve() {
    int n;
    cin >> n;
    vector<Para> p(n);
    for(int i=0; i<n; i++) cin >> p[i].a >> p[i].b >> p[i].c;

    vector<int> dp_up(n, 1), dp_down(n, 1);

    
    vector<int> order(n);
    for(int i=0; i<n; i++) order[i] = i;

   
    sort(order.begin(), order.end(), [&](int i, int j){
        return p[i].a < p[j].a;
    });

   
    for(int i=0; i<n; i++) {
        for(int j=0; j<i; j++) {
            if(is_below(p[order[j]], p[order[i]])) {
                dp_down[order[i]] = max(dp_down[order[i]], dp_down[order[j]] + 1);
            }
        }
    }

   
    for(int i=n-1; i>=0; i--) {
        for(int j=n-1; j>i; j--) {
            if(is_below(p[order[i]], p[order[j]])) {
                dp_up[order[i]] = max(dp_up[order[i]], dp_up[order[j]] + 1);
            }
        }
    }

    for(int i=0; i<n; i++) {
        cout << dp_up[i] + dp_down[i] - 1 << (i == n-1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}