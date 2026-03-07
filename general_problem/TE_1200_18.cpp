#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll num;
    cin >> num;
    vector < ll > vec(num);
    vector < ll > temp(num);
    for(int i = 0; i < num; i++)
    {
        cin >> vec[i];
        temp[i]= vec[i];
    }
    ll left = num - 2;
    ll right = num - 1;
    sort(temp.begin() , temp.end());
    if(vec == temp) {
        cout << "0\n";
        return ;
    }
    if(vec[right] < vec[left] || (vec[right]< 0 && vec[left] < 0) ) 
    {
        cout << "-1\n";
        return ;
    }
 

    ll r = vec[right];
    ll l = vec[left];
    cout << num - 2 << "\n";
    for(int i = 0; i < num - 2; i ++)
    {
        if( (r - l) < (l-r)) cout << i+1 <<" " << right + 1 << " " << left+1 << endl;
        else cout << i + 1 << " " << left + 1 << " " << right + 1 << endl;
      //  cout << l << " " << r << endl;
    }
    //cout << endl;
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
