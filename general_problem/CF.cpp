#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n , m , k;
	cin >> n >> m >> k;
	string str;
	cin >> str;
	int i = 0; 
   while(i < n)
   {
    if(str[i]=='L') i++;

    else if(str[i] == 'W')
    	{
    	
          int l = -1 , r = -1;
         
           if(i == n-1 && k > 0) 
           {
           	cout <<"YES\n";
           	return ;
           }
          if(i + m - 1 >= n)
          {
          	cout << "YES\n";
          	return ;
          }

          if(i+1 < n)
          {
          	for(int j = i+1; j < m+i; j++)
          	{
          		if(str[j] == 'L') l = j;
          		else if(str[j] == 'W') r = j; 
          	}
          }

          if(l == -1 && r == -1) 
          {
          	cout << "NO\n";
          	return ;
          }
          else if(l != -1) i = l;
          else i = r;
            
          }
       
    	



    else if(str[i] == 'C')
    	{
    		if(i == n-1) 
    		{
    			cout << "NO\n";
    			return ;
    		}
          int l = -1 , r = -1;
          if(i + m - 1 >= n)
          {
          	cout << "YES\n";
          	return ;
          }


          if(i+1 < n)
          {
          	for(int j = i+1; j < m+i; j++)
          	{
          		if(str[j] == 'L') l = j;
          		else if(str[j] == 'W') r = j; 
          	}
          }

        if(l == -1 && r == -1) 
          {
          	cout << "NO\n";
          	return ;
          }
          else if(l != -1) i = l;
          else i = r;
          }

    	}

   
   cout << "YES\n";
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	cin >> t;
	while(t--)
	{
		solve();
	}

}