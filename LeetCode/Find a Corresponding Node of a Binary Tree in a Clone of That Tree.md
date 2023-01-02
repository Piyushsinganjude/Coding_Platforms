## Find a Corresponding Node of a Binary Tree in a Clone of That Tree
Given two binary trees original and cloned and given a reference to a node target in the original tree.

The cloned tree is a copy of the original tree.

Return a reference to the same node in the cloned tree.

Note that you are not allowed to change any of the two trees or the target node and the answer must be a reference to a node in the cloned tree.

 
```c++
class Solution{

	public:
  TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return search(original,cloned,target);
    }
    TreeNode* search(TreeNode* original, TreeNode* cloned, TreeNode* target)
    {
        if(cloned==NULL) return NULL;

        if(original==target) return cloned;
    TreeNode* left = search(original->left,cloned->left,target);
      if(left) return left;
    TreeNode* right = search(original->right,cloned->right,target);
    if(right) return right;
    return NULL;
     }


};
    #### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[Find a Corresponding Node of a Binary Tree in a Clone of That Tree](https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/description/)
