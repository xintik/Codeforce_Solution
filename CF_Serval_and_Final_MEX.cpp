#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
   
    int n;
    cin >> n;
    vector < int > vec(n);
    bool flag = false;
    for(int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if(vec[i] == 0) flag = true;
    }
    if(flag == false)  cout << "1\n" << "1" << " " << n << endl;
    else if(vec[0] == 0 && vec[n-1] == 0) 
    {
        cout << "3\n";
        cout << "1" << " " << "2\n";
        cout << "2" << " " << n-1 << "\n"; 
        cout << "1" << " " << "2\n";
    }
    else if(vec[0] == 0 && vec[n-1] != 0)
    {
        cout << "2\n";
        cout << "1" << " " << n-1 << "\n";
          cout << "1" << " " << "2\n";
    }
    else if(vec[0] != 0 && vec[n-1] == 0)
    {
        cout << "2\n";
        cout << "2" << " " << n << "\n";
          cout << "1" << " " << "2\n";

    }
    else
    {
        cout << "2\n";
         cout << "1" << " " << n-1 << "\n";
          cout << "1" << " " << "2\n";
    }
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
