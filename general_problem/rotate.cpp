#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector < int > vec ={1 , 2 , 3 , 4 , 5 , 6};
	rotate(vec.begin() , vec.begin()+4, vec.end());
	for(auto &it : vec) cout << it << " ";
		cout << endl;
}