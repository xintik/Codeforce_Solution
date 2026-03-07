#include<bits/stdc++.h>
using namespace std;
void solve(int cnt)
{
	int n;
	cin >> n;
	vector < int > vec;
	vector < int > temp(n);
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		vec.push_back(x);
	}

   if(n == 1)
   {
   	cout << "Case "<< cnt << ": " <<  n << "\n";
   	return ;
   }

   map < int , int > mp;

   //index and frequency 
   int mx = vec[0];
   mp[0]++;
   for(int i = 1; i < n; i++)
   {
   	if(vec[i] > mx)
   	{
   		mp[i]++;
   		mx = vec[i];
   	}

   }
   mp[n-1]++;
   int mn = vec[n-1];
   for(int i= n-2; i >=0; i --)
   {
      if(vec[i] < mn)
      {
      	mp[i]++;
      	mn = vec[i];
      }
   }
   for(auto &it : mp)
   {
   	if(it.second == 2)
   	{
   		cout << "Case "<< cnt << ": "  << it.first+1 << "\n";
   		return ;
   	}
   }

    cout << "Case "<< cnt << ": " << "Humanity is doomed!\n";

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		solve(i);
	}
	return 0;

	
}