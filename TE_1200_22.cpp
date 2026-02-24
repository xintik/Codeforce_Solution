#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
  ll num , k , x;
  cin  >> num >> k >> x;
  vector < ll > vec(num ) ;
  for(ll i = 0; i <num ; i++)
  {
    cin >> vec[i];
    
  }
  sort(vec.begin() , vec.end());
  int cnt = 0;
  vector < ll > temp;
  for(int i = 1; i < vec.size() ; i++)
  {
  //  cout << vec[i] - vec[i-1] << " ";
    if(vec[i]-vec[i-1] > x)
    {
      ll sum = vec[i]-vec[i-1];
      sum = sum - x;
      if(sum % x) temp.push_back( (sum/x) + 1);
      else temp.push_back(sum/x);
    //  temp.push_back(((sum+x-1)/x));
     // cnt += ((sum+x-1)/x);
    }
  }
  sort(temp.begin() , temp.end());
  if(temp.size() == 0) cout << "1\n";
  else
  {
      int cnt = temp.size() + 1;
      for(int i = 0; i < temp.size() ; i++)
      {
          if(temp[i] <= k)
          {
            cnt--;
            k = k - temp[i];
            //cout << temp[i] << " ";
          }
          else
          {
            break;
          }
      }
      cout << cnt << endl;
  }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
      solve();
    

    return 0;
}