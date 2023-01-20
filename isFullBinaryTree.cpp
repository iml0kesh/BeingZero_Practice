#include <bits/stdc++.h>

using namespace std;

struct BSTNode{
	int val;
	BSTNode *left, *right;
	BSTNode(int val){
		this->val = val;
		this->left = this->right = NULL;
	}
};

bool isFullBinaryTree(BSTNode *root)
{
    // TODO:  Fill your code here
    if(root == NULL) return true;
    if(root->left == NULL && root->right == NULL) return true;
    if(root->left && root->right) 
        return (isFullBinaryTree(root->left) && isFullBinaryTree(root->right));
    return false;
}