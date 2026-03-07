class Solution {
public:
	void make(vector < int > &parent , int v)
	{
      parent[v] = v;

	}
	int find(vector < int > &parent , int v)
	{
		if(parent[v] == v) return v;

		return parent[v] = find(parent , parent[v]);
	}
	void union_set(vector < int > &parent , vector < int > &sizes , int a , int b)
	{
		a = find(parent , a);
		b = find(parent , b);

		if(a == b) return;

		if(sizes[a] < sizes[b])
		{
			swap(a , b);
		}
		parent[b] = a ;

		sizes[a] += sizes[b];
	}
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {

    	int n = accounts.size();

    	vector < int > parent(n + 1);
    	vector < int > sizes( n + 1 , 1);

    	for(int i = 0; i < n; i++)
    	{
    		make(parent , i);
    	}

    	unordered_map < string , int > mailmap;

    	for(int i = 0; i < n; i++)
    	{
    		for(int j = 1; j < accounts[i].size() ; j++)
    		{
             string mail = accounts[i][j];
             if(mailmap.find(mail) == mailmap.end()) // if not found then add the mail and it's node;
             {
             	mailmap[mail] = i;
             }
             else
             {
             	union_set(parent , sizes, i , mailmap[mail]);
             }
    		}
    	}

    	unordered_map < int , vector < string >> marge;
    	for(auto &it : mailmap)
    	{
    		string mail = it.first;
    		int node = it.second;
    		node = find(parent , node);
    		marge[node].push_back(mail);
    	}

    	vector < vector < string > > ans;
    	for(auto [node , mails] : marge)
    	{
    		vector < string > temp;
    		temp.push_back(accounts[node][0]);
    		 sort(mails.begin() , mails.end());
    		 temp.insert(temp.end() , mails.begin() , mails.end());
    		 ans.push_back(temp);
    	}
        return ans;
    }
};