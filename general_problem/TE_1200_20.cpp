#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
  int num;
  cin >> num;
  string str;
  cin >> str;
  int ans = num + 1;
  for(int i = 0; i < 26; i++)
  {
    int l = 0 , r = num - 1;
    int cnt = 0;
    while(r >= l)
    {
        if(str[l] == str[r])
        {
            l++;
            r--;
        }
        else if(str[l] == char('a' + i)) 
        {
            cnt++;
            l++;
        }
        else if(str[r] == char('a' + i))
        {
            cnt++;
            r--;
        }
        else
        {
            cnt = num+1;
            break;
        }
    }

    ans = min(ans , cnt);
  }
 if(ans == num+1) cout << "-1\n";
 else cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
      solve();
    }

    return 0;
}
