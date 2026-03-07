#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int num;
    cin >> num;
    string str;
    cin >> str;
    int cnt = 0;
    for(int i = 0; i < str.size() ; i++)
    {
      if(str[i] == '0') cnt++;
    }
    if(cnt % 2 && cnt != 1 ) cout << "ALICE\n";
    else cout << "BOB\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
