#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const int MOD = 1e9+7;
void to_binary(int n , int k)
{
      vector < int > vec;
    for(int i = n -1  ; i >=0; i--)
    {
        vec.push_back(   ((k >> i) & 1 ) );
        
    }
   cout << vec[0];
   for(int i = 1; i < vec.size() ; i++)
   {
    cout << (vec[i-1] ^ vec[i]);
   }
   cout << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
     int sum = (1 << n);
    for(int i = 0; i < sum; i++)
    {
        to_binary(n , i );
    }
    
    return 0;
   }
   
  
   

