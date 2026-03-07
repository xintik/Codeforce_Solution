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
Node* built_tree(vector < int > &preorder)
{
	inx++;
	if(preorder[inx] == -1) return NULL;
	Node* root = new Node(preorder[inx]);
	root -> left = built_tree(preorder);
	root -> right = built_tree(preorder);

	return root;
}
void pre_or_traversal(Node* root)
{
	if(root == NULL) return;

	cout << root -> data << " ";
	pre_or_traversal(root-> left);
	pre_or_traversal(root->right);

}
int main(){
	vector < int > preorder = {11 , 2 , -1 , -1 , 3 , 4, -1 , -1 , 8 , -1 , -1};
	//int inx = 0;
	Node* root = built_tree(preorder );
	
	pre_or_traversal(root);

}