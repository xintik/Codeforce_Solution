#include<bits/stdc++.h>
using namespace std;
bool is_safe(vector < string > &vec , int row , int col , int n)
{
	for(int j = 0 ; j < n; j ++) // chack row
	{
		if(vec[row][j] == 'Q') return false;
	}
	for(int i = 0; i < n; i++) // chack col
	{
		if(vec[i][col] == 'Q') return false;
	}
	int r  = row , c = col;
	while(r >= 0 && c >=0) //left upper digonal
	{
		if(vec[r][c] == 'Q') return false;
		r--;
		c--;
	}
	r = row ;
	c = col;
	while(r >= 0 && c < n)
	{
		if(vec[r][c] == 'Q') return false;
		r--;
		c++;
	}

	return true;

}
void dfs(vector < string > &vec , int row , int n , vector < vector < string > >&ans)
{
	//base 
	if(n == row)
	{
		ans.push_back(vec);
		return ;
	}
	for(int col = 0; col < n; col++)
	{
		if(is_safe(vec , row , col , n))
		{
			char ch = vec[row][col];
			if(ch != '*') {
				vec[row][col] = 'Q';
				dfs(vec , row+1 , n , ans);
				vec[row][col] = ch ;
			}
			
			
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector < string > vec;
	for(int i = 0; i < 8; i++)
	{
		string str;
		cin >> str;
		vec.push_back(str);
	}
   vector < vector < string > > ans;
    dfs(vec , 0 , 8 , ans);
   cout << ans.size() << "\n";
    // for(auto &it : ans)
    // {

    // 	for(auto &i : it)
    // 	{
    // 		cout << i<< "\n";
    // 	}
    // 	cout <<"\n";
    // }
	

}