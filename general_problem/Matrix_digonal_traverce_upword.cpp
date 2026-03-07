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
     
     vector < int > 
	// traverce up to down
	for(int i = 0; i < n; i++)
	{
		int row = i;
		int col = 0;
		while(row >= 0 && col < m)
		{
			arr.push_back(mat[row][col]);
			row--;
			col++;
		}
	}
  // traverce left to right;

	for(int j = 0; j< m; j++)
	{
		int row = n - 1; // last row;
		int col = j; // recent col;
		while(row >= 0 && col < m)
		{
			arr.push_back(mat[row ][col]);
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