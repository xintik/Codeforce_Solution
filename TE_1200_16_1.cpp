#include<bits/stdc++.h>
using namespace std;
#define ll long long
void type1(vector < ll > &vec , set < ll > &st , ll &sum , ll val , ll poss , ll old , bool flag)
{
  if(st.count(poss))
  {
    sum = sum - vec[poss] + val ;
    vec[poss] = val;
    cout << sum << endl;
  }
  else
  {
    if(flag)
    {
     sum = sum - old + val;
   vec[poss] = val;
   st.insert(poss);
   cout << sum << endl;
    }
    else
    {
    sum = sum - vec[poss] + val ;
    vec[poss] = val;
    cout << sum << endl;
    }
  
  }

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll num , qre;
  cin >> num >> qre;
  ll sum = 0;
  vector < ll > vec(num + 1);
  set < ll > st;
  for(int i = 1; i <=num; i++)
  {
    cin >> vec[i];
    sum += vec[i];
  }
  ll old = 0;
  bool flag = false;
  while(qre--)
  {
    ll type ;
    cin >> type;
    if(type == 1)
    {
      ll poss , val;
      cin >> poss >> val;
      type1(vec , st , sum, val , poss , old , flag);
     
    }
    else
    {
      ll val;
      cin >> val;
      cout << num * val << endl;
      sum = num * val;
      old = val;
      flag = true;
      st.clear();
    }
  }
}