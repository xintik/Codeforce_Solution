#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sp " "
#define nl "\n"
vector < ll > prime_factors(ll n)
{
	vector < ll > factors;

	while(n % 2 == 0)
	{
		factors.push_back(2);
		n = n / 2;
	}

	// chack for all odd numbers;

	for(ll i = 3; i * i <= n; i = i + 2)
	{
		while(n % i == 0)
		{
			factors.push_back(i);
			n = n / i;
		}
	}
	if(n > 1) factors.push_back(n);

	return factors;
}

vector < ll > All_factors(ll n)
{
	vector < ll > factors;
	for(ll i = 1; i * i <= n; i++)
	{
		if(n % i == 0)
		{
			factors.push_back(i);

			if(i != n/i) 
			factors.push_back(n/i);
		}
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
    
    vector < ll > primes = prime_factors(n);
   for(auto &it : primes) cout << it << sp;
   	cout << nl;
    vector < ll > all_factors = All_factors(n);
    for(auto &it : all_factors) cout << it << sp;
   	cout << nl;



}