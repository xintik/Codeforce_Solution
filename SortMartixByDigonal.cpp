#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row , col;
	cin >> row >> col;

	vector < vector < int > > mat(row , vector < int > ( col ));

	for(int i = 0; i < row ; i++)
	{
		for(int j = 0; j < col ; j++)
		{
			cin >> mat[i][j];
		}
	}
    vector<vector<int>> ans(row, vector<int>(col));
   
    for(int i = row - 1 ; i >= 0 ; i--)
    {
       int horizontal = i;
       int vertical = 0;

       priority_queue<int> pq;

        while(horizontal < row && vertical < col)
        {
        	pq.push(mat[horizontal][vertical]);
        	horizontal++;
        	vertical++;
        }
        int r = i;
        int c = 0;

        while(!pq.empty())
        {
        	ans[r++][c++] = pq.top();
        	pq.pop();
        }

    }
   
   for(int j = 1; j < col ; j++)
   {
   	int hori = 0;
   	int var = j;
    priority_queue<int, vector<int>, greater<int>> pq;
   	while(hori < row && var < col)
   	{
      pq.push(mat[hori++][var++]); // traverce along digonal

   	}
   	 int r = 0;
        int c = j;

        while(!pq.empty())
        {
        	ans[r++][c++] = pq.top();
        	pq.pop();
        }
   }





	for(int i = 0; i < row ; i++)
	{
		for(int j = 0; j < col ; j++)
		{
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}
	
}