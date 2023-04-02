queue<int> modifyQueue(queue<int> q, int k) {
    queue<int> ans;
    stack<int> st;
    
    while(k--){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        ans.push(st.top());
        st.pop();
    }
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }
    return ans;
}
link = https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1?page=1&difficulty[]=0&category[]=Stack&sortBy=submissions
