#include <bits/stdc++.h>

using namespace std;

struct BTNode{
	int val;
	BTNode *left, *right;
};

int countLeafNodes(BTNode *root)
{
    // TODO:  Fill your code here
    if(root == NULL) return 0;
    if(root -> left == NULL && root->right == NULL) return 1;
    else{
        return countLeafNodes(root -> left) + countLeafNodes(root -> right);
    }
}


// in java
import java.util.*;

class BeingZero
{
    int countLeafNodes(BTNode root)
    {
      // TODO:  Your Code Goes Here
      if(root == null) return 0;
      if(root.left == null && root.right == null) return 1;
      else {
          return countLeafNodes(root.left) + countLeafNodes(root.right);
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