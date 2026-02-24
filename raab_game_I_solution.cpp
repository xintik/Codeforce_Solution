#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
	{
		int n , a , b;
		cin >> n >> a >> b;
		//cout << n << " " << a << " "<< b<< endl;

		if ((a + b <= n) && ((a == 0 && b == 0) || (a > 0 && b > 0)))
		{
			cout << "YES\n";

				for(int i = 1; i <= n; i++)
				{
					cout << i << " ";
				}
				cout << "\n";
				
		for(int i = 1; i <= n; i++)
			{
				if(i <= b) cout << i + b << " ";
				else if(i <= a+b ) cout << i-b<< " ";
				else cout << i << " ";
			}
		cout << "\n";

		}
    
		else
    cout << "NO\n";		
}
}