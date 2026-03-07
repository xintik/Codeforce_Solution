#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{   ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
    ll n ;
    cin >> n;
	if((n * (n + 1) % 4 ))
	{
		cout << "NO\n";
	}
	else
	{
		cout <<"YES\n";
		ll k = (n * (n + 1) / 4 );
		long long chack;
		ll sum = 0;
		vector < int > vec1;
		vector < int > vec2;
		while(sum + n < k)
		{
			vec1.push_back(n);
            sum += n;
            n--;
           
		}
		vec1.push_back(k-sum);
		chack = k - sum;
		ll terminal = n ;

		for(int i = 1; i <= terminal ; i++)
		{
			if(chack == i) continue;

			vec2.push_back(i);
		}

		cout << vec1.size() << "\n";
		for(auto &it : vec1)
		{
			cout << it << " ";
		}
		cout << "\n";


		cout << vec2.size() << "\n";
		for(auto &it : vec2)
		{
			cout << it << " ";
		}
		cout << "\n";
	}
	
	
	
}