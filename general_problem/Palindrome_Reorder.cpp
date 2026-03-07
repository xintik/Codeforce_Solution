#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const int MOD = 1e9+7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
     cin >> str;
    map < char , int > mp;
    for(auto &it : str)
   {
    mp[it]++;
   }
 
    int fre = 0;
    char oddchar = 0;
 
    for(auto &it : mp)
   {
     if(it.second%2)
    {
    fre++;
    oddchar = it.first;
    }
   }

    string half = "";

   if(fre > 1)
   {
    cout <<"NO SOLUTION\n";
     return 0;
   }
   
   for(auto &it : mp)
   {
    if(it.second != 1 ) {
    for(int i = 0 ; i < it.second / 2; i++)
    {
        half.push_back(it.first);
    }
}
   }
   
    string result = half;
    if(fre) result.push_back(oddchar);

    reverse(half.begin() , half.end());

   result += half;
    cout << result << "\n";
   }
   
  
   

