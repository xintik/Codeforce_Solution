#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n , m;
	cin >> n >> m;
	vector < vector < int > > mat(n , vector < int > (m));
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			 cin >> mat[i][j];
		}
	}
     
     vector < int > arr;
	for(int j = m - 1; j >= 0; j--)
	{
		int row = n - 1;
		int col = j;
		while( row >= 0 && col < m)
		{
			arr.push_back(mat[row][col]);
			row--;
			col++;
		}
	}
	for(int i = n - 1 -1 ; i >= 0; i--) // n - 1 position for zore base and 1 less
	{
		int row = i;
		int col = 0;
		while(row >=0 && col < m)
		{
			arr.push_back(mat[row][col]);
			row--;
			col++;
		}
	}

	for(auto &it : arr)
	{
		cout << it << " ";
	}
	cout << endl;

}