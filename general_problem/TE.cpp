#include <bits/stdc++.h>
using namespace std;
bool void(string text , string pattern)
{
    int m = pattern.size();
    int n = text.size();
    vector < int > lps(m , 0);
   
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
           return true;
           
        } 

        else if(i < n && text[i]!=pattern[j] )
        {
            if(j == 0) i++;
            else j = lps[j-1];
        }


    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int left = 0, right = n-1;
        int cnt = 0;
        while(right > left)
        {
            if(str[left] == '(')
            {
                if(str[right] == ')')
                {
                    cnt ++;
                    left++;
                    right--;
                  
                }
                else
                {
                    right--;
                  
                }

                }
                else if(str[left]!='(') left++;
           

        }
        string pattern;
        for(int i = 0; i < cnt ; i++)
        {
            pattern.push_back('(');
        }
        for(int i = 0; i < cnt ; i++)
        {
            pattern.push_back(')');
        }
        if(solve(str, pattern )) cout << "-1\n";
        else cout << cnt * 2 << endl;
    }


}
