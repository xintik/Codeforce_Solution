// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long 
// void solve()
// {
// 	int n;
// 	cin >> n;
// 	vector < int > vec(n);
// 	int mx = n;
// 	int left , right;
// 	for(int i = 0; i < n; i++)
// 	{
// 		cin >> vec[i];
// 		if(vec[i] == n)
// 		{
// 			left = i;
// 		    right = i;
// 		}


// 	}
	
// 	bool flag = false;
// 	while(right - left < n-1)
// 	{


// 		if( (right + 1 < n) && (vec[right] - 1 == vec[right+1]))
// 		{
// 			if(right == left) 
// 			{
// 				vec[right]--;
// 			}
// 			else
// 			{
// 				vec[right]--;
// 			vec[left]--;
// 			}
			
// 			right++;
// 		}
// 		else if( (left - 1 >= 0) && (vec[left]-1 == vec[left-1]))
// 		{
// 			if(right == left) 
// 			{
// 				vec[right]--;
// 			}
// 			else
// 			{
// 				vec[right]--;
// 			vec[left]--;
// 			}
// 			left--;
// 		}
// 		else
// 		{
// 			flag = true;
// 			break;
// 		}
	  
// 	}
// 	if(flag) cout <<"NO\n";
// 	else cout <<"YES\n";
// }
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);
// 	int test;
// 	cin >> test;
// 	while(test--)
// 	{
// 		solve();
// 	}
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> b(k);
    for (int i = 0; i < k; i++) {
        cin >> b[i];
    }
    
    
    sort(a.begin(), a.end(), greater<ll>());
    
   
    sort(b.begin(), b.end());
    
    
    ll total_cost = 0;
    for (ll price : a) {
        total_cost += price;
    }
    
  
    ll s = 0;
    int used = 0;
    for (int x : b) {
        if (used + x > n) continue; // Not enough product
      
        s += a[used + x - 1];
        used += x;
    }
    
  
    cout << total_cost - s << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}