class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymetric(Node* root1,Node* root2)
    {
        if(!root1 && !root2)
        return true;
        if(!root1 || !root2)
        return false;
        if(root1->data != root2->data) return false;
        return (isSymetric(root1->left,root2->right) && isSymetric(root1->right,root2->left));
    }
    bool isSymmetric(struct Node* root)
    {
	    if(!root) return true;
	    return isSymetric(root,root);
    }
};
link - https://practice.geeksforgeeks.org/problems/symmetric-tree/1?page=1&difficulty[]=0&category[]=Tree&sortBy=submissions
