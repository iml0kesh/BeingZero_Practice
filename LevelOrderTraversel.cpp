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

void pre(BSTNode *root, vector<int> &r){
    if(root == NULL) return;
    queue<BSTNode *> q;
    q.push(root);
    while(!q.empty()){
        BSTNode *temp = q.front();
        q.pop();
        r.push_back(temp->val);
        if(temp->left != NULL)
            q.push(temp->left);
        if(temp->right != NULL)
            q.push(temp->right);
    }
}

vector<int> levelOrder(BSTNode *root)
{
    // TODO:  Fill your code here
    vector<int> res;
    pre(root,res);
    return res;
}