#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
    ll n;
    cin >> n;
    vector < ll > vec(n);
    for(int i = 0; i < n ; i++)
    {
        cin >> vec[i];
    }
    ll sum = 0;
    if(n == 2)
    {
        if(vec[0] > vec[1]) sum = sum + (vec[0] - vec[1]);
        cout << sum << "\n";
    }
    else
    {
        for(int i = 1; i < n - 1; i = i + 2)
        {
            if((vec[i-1] + vec[i+1]) > vec[i])
            {
                sum += (vec[i-1] + vec[i+1]) - vec[i];
            }
        }
        cout << sum << "\n";
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
