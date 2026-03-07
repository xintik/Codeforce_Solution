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
int call(vector < int > &it,int  k )
{
    //for(auto &i : it ) cout << i << " ";
    //    cout << endl;
    priority_queue < int > pq;
    pq.push(-1);
   
    for(auto &i : it) pq.push(i);
    int pre = k;
   vector < int > chack;
    while(!pq.empty())
    {
        chack.push_back(pre-pq.top() - 1);
        //cout << pre - pq.top() - 1 << " ";
        pre = pq.top();
        pq.pop();
    }
    sort(chack.begin() , chack.end());
    chack[chack.size()-1] = chack[chack.size()-1] / 2;
    int ans = max(chack[chack.size()-1] , chack[chack.size()-2]);
    // if(chack[chack.size()-1] > chack[chack.size()-2])
    //     return (chack[chack.size()-1] - chack[chack.size()-2]);
    // else 
    // return (chack[chack.size()-2] - chack[chack.size()-1]);
   // return max(chack[chack.size()-1] , chack[chack.size()-2]);
   // cout << endl;
   // cout << max(chack[chack.size()-1] , chack[chack.size()-2]);
   // cout << endl;
    return ans;
}

void solve() {
    int n , k;
    cin >> n  >> k;
    vector < int > vec(n);
    vector < vector < int > > indx(k+1);
    for(int i = 0; i < n; i++)
    {
        cin >> vec[i];
        indx[vec[i]].push_back(i);
    }
    int mn = INT_MAX;

    for(int i = 1; i <= k; i++)
    {
       int p =  call(indx[i] , n);

      mn = min(mn , p);
    }
     //cout << endl;
    cout << mn << endl;

   
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
