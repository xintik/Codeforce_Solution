#include<bits/stdc++.h>
using namespace std;
	class Node
	{
		public:

			int data;
			Node* left;
			Node* right;

		Node(int val)
		{
			data = val;
			left = right = NULL;
		}

	};

	static int inx = -1;
	Node* Built_Tree(vector < int > &preorder)
	  {
		inx++;
		if(preorder[inx] == -1) return NULL;
		Node* root = new Node(preorder[inx]);
		root-> left = Built_Tree(preorder);
		root-> right = Built_Tree(preorder);
		return root;


	  }

	  void Pre_Order_traversal(Node* root)
	  {
	  	if(root == NULL) return;
	  	cout << root -> data << " ";
	  	Pre_Order_traversal(root->left);
	  	Pre_Order_traversal(root->right);

	  }

	  void In_Order_traversal(Node* root)
	  {
	  	if(root == NULL) return;
	  	
	  	In_Order_traversal(root->left);
	  	cout << root -> data << " ";
	  	In_Order_traversal(root->right);
	  }

	  void post_Order_traversal(Node* root)
	  {
	  	if(root == NULL) return;

	  	post_Order_traversal(root->left);
	  	post_Order_traversal(root->right);
	  	cout << root->data << " ";
	  }
 int main()
  {
	int t = 1;
	vector < int > preorder;
	while(t)
	{
		int x;
		cin >> x;
		if(x == -2) t = 0;
		else preorder.push_back(x);
	}
	
	Node* root = Built_Tree(preorder);

	Pre_Order_traversal(root);
	cout << endl;
	In_Order_traversal(root);
	cout << endl;
	post_Order_traversal(root);


 }