class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int flag =1;
    int ans(Node *root){
        if(!root) return 0;
        int l = ans(root->left);
        int r = ans(root->right);
        if(abs(l-r)>1) flag = 0;
        return max(l,r)+1;
    }
    bool isBalanced(Node *root)
    {
        flag = 1;
        ans(root);
        return flag;
    }
};
(https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1?page=1&difficulty[]=0&category[]=Tree&sortBy=submissions)
