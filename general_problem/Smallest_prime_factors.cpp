#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sp " "
#define nl "\n"
const int N = 1000000;
vector < ll > small_prime_factor()
{
	vector < ll > spf(N+1);
	for(ll i = 1 ; i <= N; i++ ) spf[i] = i;

		for(ll i = 2; i*i<= N; i++)
		{
			if(spf[i] == i) // i is a prime number
			{
				for(ll j = i * i; j <= N; j = j + i)
				{
					if(spf[j] == j) // it is a factor of i
					{
						spf[j] = i;
					}
				}
			}
		}

		return spf;
}
vector < ll > prime_factors(vector < ll > &SPF , ll n)
{
	vector < ll > factors;
	while(n!=1)
	{
		factors.push_back(SPF[n]);
		n = n / SPF[n];
	}

	return factors;

}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	//Algorithms 
	//1 . divide by 2 while possible ;
	// 2 . chack odd numbers from 3 to sqrt(n);
	// 3 . if(n > 1) it is a prime number else not;

	ll n;
	cin >> n;
    
   vector < ll > SPF = small_prime_factor();

   vector < ll > all_prime_factors = prime_factors(SPF,n);

    for(auto &it : all_prime_factors) cout << it << sp;
    	cout << nl;

}