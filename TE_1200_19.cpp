#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
   int num ;
   char ch;
   cin >> num >> ch;
   string str;
   cin >> str;
   
   bool ans = true;
   for(auto &it : str) if(it != ch) ans = false;
    if(ans)
    {
        cout << "0\n";
        return;
    }
  
    for(int x = 1; x<= num; x++)
    {
        bool flag = true;
        for(int i = x ; i <= num; i = i+ x)
        {
            if(str[i-1] != ch)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << "1\n";
            cout << x << endl;
            return;
        }
    }
   cout << "2\n";
   cout << num-1 << " " << num << endl;
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
