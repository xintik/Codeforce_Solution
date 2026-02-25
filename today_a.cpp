#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define vi vector < int >
#define vii vector < long long >
#define sp " "
//  int cnt = __builtin_popcount(x);
const ll INF = 2e18;
const int N = 3e5;
#define u128 __uint128_t
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

void solve() {
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
   
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while(test--)  solve();

    return 0;
   
}