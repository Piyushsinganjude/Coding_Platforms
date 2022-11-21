## Univalued Binary Tree
A binary tree is uni-valued if every node in the tree has the same value.

Given the root of a binary tree, return true if the given tree is uni-valued, or false otherwise.
## Example 
Example 1:


Input: root = [1,1,1,1,1,null,1]
Output: true
```java
class Solution{
 public boolean ans(TreeNode root,int s)
    {
      if(root == null) return true;
      if(root.val!=s)return false;
      boolean l=ans(root.left,s);
      boolean r=ans(root.right,s);
      if(l== true && r== true)
      return l==r;
      return false;
    }
    public boolean isUnivalTree(TreeNode root) {
    return ans(root,root.val);
    }
}
  #### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[Univalued Binary Tree](https://leetcode.com/problems/univalued-binary-tree/description/)
