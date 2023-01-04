##  Leaf-Similar Trees
For example, in the given tree above, the leaf value sequence is (6, 7, 4, 9, 8).

Two binary trees are considered leaf-similar if their leaf value sequence is the same.

Return true if and only if the two given trees with head nodes root1 and root2 are leaf-similar.

 Input: root1 = [3,5,1,6,2,9,8,null,null,7,4], root2 = [3,5,1,6,7,4,2,null,null,null,null,null,null,9,8]
Output: true
Example 2:


Input: root1 = [1,2,3], root2 = [1,3,2]
Output: false
 
## Example 
Example 1:


Input: root1 = [3,5,1,6,2,9,8,null,null,7,4], root2 = [3,5,1,6,7,4,2,null,null,null,null,null,null,9,8]
Output: true
Example 2:


Input: root1 = [1,2,3], root2 = [1,3,2]
Output: false
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
Time Complexity :O(n1+n2)
Space Complexity : O(1)
```
## Leetcode
[ Leaf-Similar Trees](https://leetcode.com/problems/leaf-similar-trees/description/)
