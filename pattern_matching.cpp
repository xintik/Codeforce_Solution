#include <bits/stdc++.h>
using namespace std;

void solve()
{
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
       
       for(int i = 0; i < cnt; i++)
       {
       	if(str[i] !='(')
       	{
       		cout << cnt * 2 << endl;
       		return ;
       	}
       }
       cout << "-1\n";

    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {

    	 solve();
    	}



}
