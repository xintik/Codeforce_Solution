#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n , m;
	cin >> n >> m;
	vector < int > arr(n);
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	vector < int > fre(m + 1);
	set < int > st;
	for(int i = 0; i <= m; i++)
	{
		st.insert(i);
	}
   vector < int > ans;
	for(int i = 0 ; i < m; i++)
	{
		// add at array process
		if(arr[i] <= m)
		{
			fre[arr[i]]++;

			if(fre[arr[i]] == 1) // if we add first time
			{
				st.erase(arr[i]);
			}
		}
	}

	ans.push_back(*(st.begin())); // *(st.begin()) == mex 
	// this is first mex
	for(int i = m ; i < n; i++)
	{
		// remove the number form the arr
		if(arr[i-m] <= m) // arr[i-1] point the left most element of slide windows
		{
			fre[arr[i-m]]--; // remove complete 
			if(fre[arr[i-m]] == 0) // if the arr[i-m] is discrete element of the array then add it at st;
			{
				st.insert(arr[i-m]);
			}

		}	
		// add the number
		if(arr[i] <= m)
		{
			fre[arr[i]]++;
			if(fre[arr[i]]==1) // if add the new number than remove form st;
			{
				st.erase(arr[i]);
			}
		}

		ans.push_back(*(st.begin()));
	}

   for(auto &it : ans )
   {
   	cout << it << " ";
   }
   cout <<"\n";
}

o(n) time
