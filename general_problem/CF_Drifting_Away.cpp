#include <bits/stdc++.h>
using namespace std;


void solve()
{
    string str;
    cin >> str;
    int cnt = 1;
    int mx = INT_MIN;
    char pre = str[0];
    for(int i = 1; i < str.size(); i++)
    {
        char curr = str[i];
        if( (str[i]=='*' && str[i-1] =='*') ||  (str[i]=='<' && str[i-1] =='*') ||
         (str[i]=='*' && str[i-1] =='>') ||(str[i]=='<' && str[i-1] =='>') )
         {
            cout << "-1\n";
            return ;
         }
         else if( (pre == curr) || (curr == '*') )
         {

            cnt++;
         }
         else
         {
            mx = max(mx , cnt);
            pre = curr;
            if(str[i-1] == '*')
            {
                cnt = 2;
            }
            else
                cnt = 1;

         }
    }
    mx = max(mx , cnt);
    cout << mx << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

   

    return 0;
}
