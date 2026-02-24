#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
  int n , k;
  cin >> n >> k;
  vector < vector < int > > vec(n , vector < int > (n));
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j ++)
    {
        cin >> vec[i][j];
    }

  }
 vector < vector < int > > temp(n , vector < int > (n));
  for(int i = n-1; i >=0; i--)
  {
    for(int j = n-1; j >=0; j--)
    {
       // temp[i][j]= vec[i][j] ;
        //cout << vec[i][j] << " ";
        temp[n-i-1][n-j-1] = vec[i][j];
    }
   // cout << endl;
   
  }
  int cnt = 0;
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j ++)
    {
        if(vec[i][j] != temp[i][j]) cnt++;
        //cout << temp[i][j] << " ";
    }
   //cout << endl;
  }
  cnt = cnt/2;
   if(cnt > k) cout << "NO\n";
   else if(n%2 == 0 &&(k-cnt)%2) cout << "NO\n";
   else cout << "YES\n";
  
  
  

  
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
