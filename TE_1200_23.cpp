#include <bits/stdc++.h>
using namespace std;


bool kmp(string text, string pattern)
{
    int n = text.size();
    int m = pattern.size();
    if (m == 0) return true;

    vector<int> lps(m, 0);

    // Build LPS array
    for (int i = 1, len = 0; i < m; )
    {
        if (pattern[i] == pattern[len])
            lps[i++] = ++len;
        else if (len != 0)
            len = lps[len - 1];
        else
            lps[i++] = 0;
    }

    // KMP search
    for (int i = 0, j = 0; i < n; )
    {
        if (text[i] == pattern[j])
        {
            i++; j++;
        }

        if (j == m)
            return true;
        else if (i < n && text[i] != pattern[j])
        {
            if (j != 0) j = lps[j - 1];
            else i++;
        }
    }
    return false;
}


void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

   
    for(int len = 1 ; ; len++)
    {
    	string patt(len , 'a');
    	
    	while(true)
    	{
    		if(!kmp(str , patt))
    		{
    			cout << patt << "\n";
    			return ;
    		}
    		int i = len - 1;
    		while(i >= 0 && patt[i] == 'z')
    		{
    			patt[i] = 'a';
    			i--;
    		}

    		if(i < 0) break;

    		patt[i]++;

    	}
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
        solve();
}
