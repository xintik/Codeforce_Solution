#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector < ll > vec(n);
   for(int i = 0; i < n; i++){
   	cin >> vec[i];
   }
    
    ll sum = INT_MAX;
    for(int i = 0; i < (1 << n); i++)
    {
    	ll a = 0 ;
    	ll b = 0;
    	for(int j = n-1; j >=0; j--)
    	{
    		if( ((i >> j) & 1) ) 
    		{
    			a += vec[j];
    		}
    		else
    		{
    			b+= vec[j];
    		}

    	
    	}
    	if(abs(a-b) < sum) sum = abs(a-b);
    	// ll sum1 = abs(a - b);
    	// if(sum1 < sum) sum = sum1;
    	//cout << a << " " << b << "\n";
     
    	//cout << abs(a - b) << "\n";
    }
    cout << sum << "\n";
    return 0;
}