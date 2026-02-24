#include <bits/stdc++.h>
using namespace std;


void solve(vector < vector < int > > &vec , map < int , int > &mp, int m)
{

  int cnt = 1;
  for(auto &it : vec)
  {
    int flag = 0;
    for(auto &i : it)
    {
        if(mp.count(i))
        {
            mp[i]--;
            if(mp[i] < 1) 
            {
                flag = 1;
                mp[i]++;
                break;
            }
            mp[i]++;
        }
    }
    if(flag == 0) cnt++;

    if(cnt == 3) break;

  }

  if(cnt == 3) cout << "YES\n";
  else cout << "NO\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
     int n , m;
    cin >> n >> m;
    vector < vector < int > > vec;
    map < int , int > mp;
    set < int > st;
     while(n--)
    {
       int k;
       cin >> k;
       vector < int > vec1(k);
       for(int i = 0; i < k ; i++)
       {
        cin >> vec1[i];
        mp[vec1[i]]++;
        st.insert(vec1[i]);
       }
       vec.push_back(vec1); 
    
    }
    if(st.size() !=m) cout << "NO\n";
    else
    solve(vec , mp ,  m);
    }

   

    return 0;
}
