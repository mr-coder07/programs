#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
 int getLeafCount(struct node* node)
{
	if(node == NULL)
		return 0;
	if(node->left == NULL && node->right == NULL)
		return 1;
	else
		return getLeafCount(node->left)+
			getLeafCount(node->right);
}
struct node* newNode(int data)
{
	node* nnode = new node();
	nnode->data = data;
	nnode->left = NULL;
	nnode->right = NULL;
return(nnode);
}

int main()
{

	struct node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

cout << "Leaf count of the tree is : "<<
				getLeafCount(root) ;
return 0;
}

