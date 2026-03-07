#include <bits/stdc++.h>
using namespace std;

static inline void fast(){ ios::sync_with_stdio(false); cin.tie(nullptr); }

#define int long long
#define u128 __uint128_t
#define endl '\n'
#define pb push_back


bool fun(int n, int s, int m){
    u128 rem = s; 
    for(int bit = 60; bit >= 0 && rem > 0; bit--){
        if(((m >> bit) & 1) == 0) continue; 
        u128 have = n;            
        u128 need = rem >> bit;   
        u128 take = min(have, need);  
        rem -= take * (1ULL << bit);  
    }
    return rem == 0;
}

void solve(int _){
    int s, m;
    cin >> s >> m;

    int left = 1, right = s;
    int answer = -1;

    while(left <= right){
        int mid = (left + right) / 2;
        if(fun(mid, s, m)){
            answer = mid;
            right = mid - 1; 
        } else {
            left = mid + 1;  
        }
    }

    cout << answer;
}

signed main(){
    fast();
    int tc = 1; 
    cin >> tc;
    for(int t = 1; t <= tc ; t++){
        solve(t);
        cout << endl;
    }
    return 0;
}