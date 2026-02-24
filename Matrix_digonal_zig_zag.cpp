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
     int row = 0 , col = 0;
     while(arr.size() < n * m)
     {
     	

        if((row+col) % 2 == 0)
        {
        	arr.push_back( mat[row][col] );
        	
        	if(col == m - 1) // first right boundory 
        	{
        		row++;
        	}
        	 else if(row == 0) // then chack top boundory ;
        	{
        		col++;
        	}
        	else
        	{
        		row--;
        		col++;
        	}
        }

        else
        {
            arr.push_back( mat[row][col] );
        	if(row == n -1 ) // touch bottom then shift right by col++;
        	{
              col++;
        	}
        	else if(col == 0)  // touch the left then shift down by row++;
        	{
            row++; 
        	}
        	else{
        		row++;
        		col--;
        	}
        }
     }
	for(auto &it : arr)
	{
		cout << it << " ";
	}
	cout << endl;

}