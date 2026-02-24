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

void solve() {
   
       int n;
       cin >> n;
       vector < int > vec(n);
       priority_queue < int > pq2;
       priority_queue < int , vector < int > , greater < int > > pq1;
       for(int i = 0; i < n; i++)
       {
        cin >> vec[i];
        pq1.push(vec[i]);
        pq2.push(vec[i]);
       }

       int l = 0, r = n - 1;
       while(r > l)
       {
        bool flag1 = true, flag2 = true;
        if(pq1.top() == vec[l]) // min
        {
            pq1.pop();
            l++;
            flag1 = false;
        }
        if(pq1.top() == vec[r])
        {
            pq1.pop();
            r--;
             flag2 = false;
        }
        if(pq2.top() == vec[l]) // min
        {
            pq2.pop();
            l++;
            flag1 = false;
        }
        if(pq2.top() == vec[r])
        {
            pq2.pop();
            r--;
             flag2 = false;
        }
        if(flag1 && flag2) 
        {

            cout << l+1 << " " << r+1 << endl;
            return ;
        }

       }
       cout << "-1\n";

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
