class Solution
{
    public:
vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long> st;
        vector<long long> ans;
        
        ans.push_back(-1);
        st.push(arr[n-1]);
        
        for(long long i = n-2;i>=0;i--){
            while(!st.empty() && st.top() <= arr[i])
            st.pop();
            
        long long next = (st.empty()) ? -1 : st.top();
        ans.push_back(next);
        st.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
link = https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1?page=1&difficulty[]=1&category[]=Stack&sortBy=submissions
