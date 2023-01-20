#include <bits/stdc++.h>

using namespace std;

struct BTNode{
	int val;
	BTNode *left, *right;
};

int sizeOfTree(BTNode *root)
{
    // TODO:  Fill your code here
    if(root == NULL) return 0;
    return 1 + sizeOfTree(root -> right) + sizeOfTree(root -> left);
}


// in java

import java.util.*;

class BeingZero
{
    int sizeOfTree(BTNode root)
    {
      // TODO:  Your Code Goes Here
      if(root == null) return 0;
      return (1 + sizeOfTree(root.right) + sizeOfTree(root.left));
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