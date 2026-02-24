#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll k;
	cin >> k;
   for(ll n = 1 ; n <= k; n++)
   {

   	ll all_possiple_combination_two_knight =  ( n*n *( n *n - 1))/2;
	ll Knigh_can_attact_each_other = 4 * (n-1) *(n-2);
	cout << all_possiple_combination_two_knight - Knigh_can_attact_each_other << "\n";
   }
	
}