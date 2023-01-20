#include <bits/stdc++.h>

using namespace std;

struct BTNode{
	int val;
	BTNode *left, *right;
};

int sumOfAllNodes(BTNode *root)
{
    // TODO:  Fill your code here
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return root->val;
    else {
        return root->val + sumOfAllNodes(root->left) + sumOfAllNodes(root->right);
    }
}


//in java

import java.util.*;

class BeingZero
{
    int sumOfAllNodes(BTNode root)
    {
      // TODO:  Your Code Goes Here
      if(root == null) return 0;
      if(root.left == null && root.right == null) return root.data;
      else{
          return root.data + sumOfAllNodes(root.left) + sumOfAllNodes(root.right);
      }
    }
}

class BTNode
{
    int data;
    BTNode left, right;
    BTNode(int d)
    {
      	data = d;
      	left = right = null;
    }
}