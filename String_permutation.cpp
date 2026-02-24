#include<bits/stdc++.h>
using namespace std;
void backtracking(string str , string current , set < string > &st , vector < bool > &visited)
{
    if(str.size() == current.size())
    {
        st.insert(current);
    }
    for(int i = 0; i < str.size() ; i++)
    {
        if(visited[i] == true) continue;
        
        visited[i] = true;
        current.push_back(str[i]);
       backtracking(str , current , st , visited);
        visited[i] = false;
        current.pop_back();
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin >> str;
    sort(str.begin() , str.end());
    string current ;
    set < string > st;
    vector < bool > visited(str.size() , false);
    backtracking(str , current , st , visited );
    cout << st.size() << "\n";
    for(auto &it : st)
    {
        cout << it << "\n";
    }
    return 0;
}