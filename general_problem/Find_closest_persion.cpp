#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int x , y , z;
	cin >> x >> y >> z;

	int first = abs(x - z);
	int second = abs(y - z);
	cout << first << " " << second << "\n";
	// if(first > second)  cout <<"1\n";
	// else if(second > first)  cout << "2\n";
	// else cout << "0\n";
}