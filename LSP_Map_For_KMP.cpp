#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string text , pattern;
	cin >> text >> pattern ;
	int m = pattern.size();
	int n = text.size();
	vector < int > lps(m , 0);
	vector < int > ans;
    int len = 0;
    int i = 1; // first lsp[0] is always 0
	while(i < m)
	{
        if(pattern[i] == pattern[len]) // if the charecter is match
        {
        	len++;
        	lps[i++] = len;
        }
        else
        {
        	// len == 0 or len != 0
        	if(len == 0) 
        	{
        		lps[i] = 0;
        		i++;
        	}
        	else
        	{
        		// len = previous lsp index
        		len = lps[len - 1];
        	}
        }
	}

	i = 0;
	int j = 0;
	while(i < n)
	{
        if(text [i] == pattern[j]) 
        {
        	i++;
        	j++;
        }

        if(j == m)
        {
        	ans.push_back(i - j); // ans is i to i+j - 1;
        	j = lps[j-1];
        } 

        else if(i < n && text[i]!=pattern[j] )
        {
        	if(j == 0) i++;
        	else j = lps[j-1];
        }


	}

	cout << ans.size() << "\n";
    


}