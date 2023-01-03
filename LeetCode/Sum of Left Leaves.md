## Sum of Left Leaves
Given the root of a binary tree, return the sum of all left leaves.

A leaf is a node with no children. A left leaf is a leaf that is the left child of another node.

 
## Example 
Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: 24
Explanation: There are two left leaves in the binary tree, with values 9 and 15 respectively.
Example 2:

Input: root = [1]
Output: 0
```java
class Solution{

	public:
  int sumOfLeftLeaves(TreeNode root) {
        if(root == null)
        {
            return 0;
        } else if(root.left != null && root.left.left== null && root.left.right == null){
            return root.left.val + sumOfLeftLeaves(root.right);
        } else {
            return sumOfLeftLeaves(root.left) + sumOfLeftLeaves(root.right);
        }

        }
    } #### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[Sum of Left Leaves](https://leetcode.com/problems/sum-of-left-leaves/description/)
