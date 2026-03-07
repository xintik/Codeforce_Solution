#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const int MOD = 1e9+7;
void tower_of_haoin(int n , int source , int media , int destination  , vector < pair < int , int > > &vec)
{
    if(n > 0)
    {
        tower_of_haoin(n - 1 , source , destination, media , vec);
         vec.push_back( {source , destination });
        tower_of_haoin(n -1 , media , source , destination , vec);
    }
   
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector < pair < int , int > > vec;
    tower_of_haoin(n , 1 , 2 , 3 , vec);
     cout << vec.size() << "\n";
    for(auto &it : vec)
    {
        cout << it.first << " " << it.second << "\n";
    }
    return 0;
 }
   
  
   

