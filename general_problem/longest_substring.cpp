#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string str;
	cin >> str;
	map < char , int > mp;

	int left = 0, right = 0;

	int mx = INT_MIN;
        bool dublicate = false;
	while(right < str.size())
	{ 
		if(!dublicate)
	  mp[str[right]]++;
       dublicate = false;
	  for(auto &it : mp)
	  {
	  	if(it.second > 1) {
	  		dublicate = true;
	  		break;
	  	}
	  

	  }
	 
	  if(dublicate)
	  {
	  int x = mp.size();
	  mx = max(mx , x);
	  	mp[str[left]]--;
	  	left++;
	  	//right++;
	  }
	  else
	  {
	  	right++;
	  }
	} 
        cout << mx << "\n";

   
	   
}