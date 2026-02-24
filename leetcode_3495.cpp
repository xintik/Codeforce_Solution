#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector < vector < int > > vec;
	for(int i = 0; i < n; i++)
	{
      int x , y;
      cin >> x >> y;
      vec.push_back({x , y});
	}
    int ans = 0;
	for(auto &it : vec)
	{
		int left = it[0];
		int right = it[1];
		vector < int > ar;
		while(right >= left)
		{
			ar.push_back(left++);
		}
		for(auto it: ar) cout << it << " ";
				cout <<"\n";

		int l = 0 , r = ar.size() - 1;
		while(r >= l)
		{
			int cnt = (ar[l]/4) + 1;
			ans = ans + cnt;
			ar[l] = 0;
			l++;
			ar[r] = ar[r]/(4+cnt);
            if(ar[r] == 0) r--;
            if(ar[l] > ar[r])
            {
            	swap(ar[l] , ar[r]);
            }
			for(auto it: ar) cout << it << " ";
			cout <<"\n";

		}
		// for(int i = ar.size() - 1; i > 0 ; i--)
		// {
			
		// 	if(ar[i-1] > ar[i])
		// 	{
		// 		int temp = ar[i];
		// 		ar[i] = ar[i-1];
		// 		ar[i-1] = temp;
		// 	}
		// 	int cnt = (ar[i-1] / 4) + 1;
		// 	ans += cnt;
		// 	ar[i] = ar[i]/(4*cnt);

		// 	ar[i-1] = ar[i];

		// 	ar[i] = 0;
		// 	if(ar[i-1] == 0)
		// 	{
		// 		i--;
		// 	}
		// 	for(auto it: ar) cout << it << " ";
		// 		cout <<"\n";
		// }
		// for(auto it: ar) cout << it << " ";
		// 		cout <<"\n";
		// if(ar[0]!=0)
		// {
		// 	ans+= (ar[0] / 4 ) + 1;
		// }
		
}
  cout << ans << endl;
}