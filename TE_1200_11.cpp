#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long gcd(long long a, long long b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}
ll minPrimeDivisor(ll n) {
    if (n <= 1) return -1;
    if (n % 2 == 0) return 2;
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
    return n; // n is prime
}
void solve() {
   
     int n;
     cin >> n;
     string str;
     cin >> str;
     set < ll > st;
     vector < ll > vec(n+1);
     vector < ll > ans(n+1);
     ll sum = 0;
     for(int i = 1; i <=n; i++)
     {
        vec[i] = (str[i-1] == '1');
     }

     for(int i = n ; i >= 1; i--)
     {
        for(int j = i; j <= n; j= j+ i)
        {
            if(vec[j]) break;
            ans[j] = i;
        }
     }

     for(int i =1; i <= n; i++)
     {
        if(!vec[i]) sum += ans[i];
     }
     cout << sum << endl;
     
   
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
