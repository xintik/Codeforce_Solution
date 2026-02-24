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
     // down to up
	for(int i = n - 1; i >= 0; i--)
	{
		int row = i;
		int col = m - 1;
		while(row < n && col >= 0)
		{
			arr.push_back(mat[row][col]);
			row++;
			col--;
		}
	}
	for(int j = m - 1 -1 ; j >= 0 ; j-- ) 
	{
       int row = 0;
       int col = j;
       while(row < n && col>= 0)
       {
       	arr.push_back(mat[row][col]);
       	row++;
       	col--;
       }
	}
	for(auto &it : arr)
	{
		cout << it << " ";
	}
	cout << endl;

}