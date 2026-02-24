#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string str;
	cin >> str;
	int point = 0;
	int ans = 0;
	int cnt = 1;
	while(point < str.size() )
	{
      if(str[point] == str[point+1]) cnt++;
      else 
      {
      	ans = max(ans , cnt);
      	cnt = 1;
      }

      point++;
	}
	cout << ans << "\n";
	return 0;
	
	
}