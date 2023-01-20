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


//in java

import java.util.*;

class BSTNode{
    int val;
    BSTNode left, right;
    BSTNode(int d){
      	val = d;
      	left = right = null;
    }
}

class BeingZero
{
    boolean isFullBinaryTree(BSTNode root)
    {
      // TODO:  Your Code Goes Here
      if(root == null) return true;
      if(root.left == null && root.right ==null) return true;
      if(root.left !=null && root.right !=null){
          return isFullBinaryTree(root.left) && isFullBinaryTree(root.right);
      }
      return false;
    }
}

