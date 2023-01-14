## Check for BST
Given the root of a binary tree. Check whether it is a BST or not.
Note: We are considering that BSTs can not contain duplicate Nodes.
A BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
 
## Example 1:
Example 1:

Input:
   2
 /    \
1      3
Output: 1 
Explanation: 
The left subtree of root node contains node
with key lesser than the root nodes key and 
the right subtree of root node contains node 
with key greater than the root nodes key.
Hence, the tree is a BST.

## Example 2:

Input:
  2
   \
    7
     \
      6
       \
        5
         \
          9
           \
            2
             \
              6
Output: 0 
Explanation: 
Since the node with value 7 has right subtree 
nodes with keys less than 7, this is not a BST.
```

## Solution 

```cpp
class Solution{
public:
    //Function to check whether a Binary Tree is BST or not.
    bool BST(Node* root,int&prev){
        if(root==NULL) return 1;
        
        if(BST(root->left,prev)==false) return false;
        
        if(root->data<=prev) return false;
        prev = root->data;
        
        return BST(root->right,prev);
    }
    
    bool isBST(Node* root) 
    {
        int prev = INT_MIN;
        return BST(root,prev);
    }
};

```
#### Complexity
```bash
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the BST).
```
## gfg
[Check for BST](https://practice.geeksforgeeks.org/problems/check-for-bst/1?page=1&category[]=Tree&sortBy=submissions)