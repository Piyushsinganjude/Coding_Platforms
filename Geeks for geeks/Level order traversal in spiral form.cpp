vector<int> findSpiral(Node *root)
{
    stack<Node*> st1,st2;
    vector<int> v;
    if (root == NULL) return{};
    st1.push(root);
    while(!st1.empty() || !st2.empty()){
        while(!st1.empty()){
            Node* curr = st1.top();
            v.push_back(curr->data);
            st1.pop();
            if(curr->right)st2.push(curr->right);
            if(curr->left)st2.push(curr->left);
        }
        while(!st2.empty()){
            Node* curr = st2.top();
            st2.pop();
            v.push_back(curr->data);
            if(curr->left)st1.push(curr->left);
            if(curr->right)st1.push(curr->right);
        }
    }
    return v;
}
LINK = https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1?page=1&difficulty[]=0&category[]=Stack&sortBy=submissions
