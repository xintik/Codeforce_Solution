#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int n = str.size();
    int i = 0 , j = 1, k = 0;
    while( i < n &&  j < n && k < n)
    {
    	if(str[(i + k)%n ] == str[(j+k) % n])
    	{
    		k++;
    	}
    	else
    	{
    		if(str[(i + k)%n ] > str[(j+k) % n])
    		{
    			i = i+ k + 1;
    		}
    		else
    		{
    			j = j + k + 1;
    		}

    		if(i == j) j++;

    		k = 0;
    	}
    }
    int ans = min(i , j);
    cout << str.substr(ans) + str.substr(0,ans) << "\n";
}