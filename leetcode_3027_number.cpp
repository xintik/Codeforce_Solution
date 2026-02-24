#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> vec(n);

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        vec[i].push_back(x);
        vec[i].push_back(y);
    }
   sort(vec.begin() , vec.end() , [](const vector < int > &a , const vector < int > &b) 
   {
   	if(a[0] != b[0]) return a[0] < b[0];
   	return a[1] > b[1];
   });
   int cnt = 0;
   for(int i = 0; i < n; i++)
   {
   
     int y1 = vec[i][1];
   	int max_y = INT_MIN;
   	for(int j = i+1; j < n; j++)
   	{
   		
   		int y2 = vec[j][1];

   		if(y2 <= y1) // if it is lies at left side;
   		{
           if(y2 > max_y)
           {
           	cnt++;
           }
           max_y = max(max_y , y2);
   		}
   	}

   }
   cout << cnt << "\n";

  return 0;
}

  



