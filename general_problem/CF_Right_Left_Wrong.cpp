#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
 {
   ll n;
   cin >> n;
   vector < ll > vec(n+1);
   for(int i = 1; i <= n; i++)
   {
    ll x;
    cin >> x;
    vec[i] += (vec[i-1] + x);
   }

   string str;
   cin >> str;
   
   str = " " + str;

   priority_queue<int> r;
   priority_queue < int , vector < int > , greater < int >  > l;
   for(int i = 1; i < str.size() ; i++)
   {
    if(str[i] == 'L') l.push(i);
    else r.push(i);
   }

    ll sum = 0;
   
     while(!l.empty() && !r.empty()) {
    
     if(r.top() > l.top() ) 
        {
            sum += vec[r.top()] - vec[l.top() -1];
           // cout <<   <<"\n";
        }
        l.pop();
        r.pop();

     }
     cout << sum << endl;

 }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
