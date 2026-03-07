#include <bits/stdc++.h>
using namespace std;

bool is_possible(map < char , int > &mp , char curr)
{
    char mode = curr;
    int total_left = 0;
    for(auto &it : mp)
    {
        if(it.second > mp[mode])
            mode = it.first;
           
         total_left += it.second;
    }
    return ( (mp[mode] <= (total_left+1) / 2) && (mp[curr] <= total_left/2) );
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    int n = s.size();
    
    map < char , int > mp;
    for(int i = 0 ; i < n; i++)
    {
        mp[s[i]]++;
    }

    string ans = "";
    char last = '\0';

    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < 26; j++)
        {
           char ch = 'A' + j;

           if(mp[ch] == 0 || ch == last) continue;

           mp[ch]--;

           if(is_possible(mp , ch))
           {
            ans.push_back(ch);
            last = ch;
            break;
           }
           else
           {
            mp[ch]++;
           }
        }
        //  cout << ans << endl;
    }

    if(ans.size() == n ) cout << ans << "\n";
    else cout << "-1\n";
  
   
}
