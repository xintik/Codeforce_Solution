#include<bits/stdc++.h>
using namespace std;
bool is_save(int row , int col , int current , vector < vector < int > > &vec)
{
	for(int j = 0; j < col ; j ++)
	{
		if(vec[row][j] == current) return false;

	}
	for(int i = 0; i < row ; i++)
	{
		if(vec[i][col] == current) return false;
	}
	return true;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector < vector < int > > vec(n , vector < int > (n,0));
	set <int > st;
	for(int i = 0; i < 2 * n; i++)
	{
		st.insert(i);
	}
	for(int i = 0; i < n ; i ++)
	{
		for(int j = 0 ; j < n ; j ++)
		{
			for(auto &it : st)
			{
				if(is_save(i , j , it, vec))
				{
					vec[i][j] = it;
					break;
				}
			}
		}
		
	}

	for(int i = 0; i < n; i++)
	{
		for(int j  = 0; j < n; j++)
		{
			cout << vec[i][j] << " ";
		}
		cout << "\n";
	}
}