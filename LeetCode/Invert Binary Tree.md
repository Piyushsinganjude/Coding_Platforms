## Invert Binary Tree
Given the root of a binary tree, invert the tree, and return its root.

 
## Example 
Example 1:


Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1]
Example 2:


Input: root = [2,1,3]
Output: [2,3,1]
```c++
class Solution{

	public:
  /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void swap(TreeNode *curr)
    {
        if(!curr)
        return;

        swap(curr->left);
        swap(curr->right);

        TreeNode *temp;
        temp = curr->left;
        curr->left = curr->right;
        curr->right = temp;
    }
public:

    TreeNode* invertTree(TreeNode* root) {
        swap (root);
        return root;
    }
};  #### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/description/)
