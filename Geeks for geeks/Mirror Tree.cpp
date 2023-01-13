class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        if(!node) return;
        swap(node->left,node->right);
        mirror(node->right);
        mirror(node->left);
    }
};
Link - https://practice.geeksforgeeks.org/problems/mirror-tree/1?page=1&difficulty[]=0&category[]=Tree&sortBy=submissions
