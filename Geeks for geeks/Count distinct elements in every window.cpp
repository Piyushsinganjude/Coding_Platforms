class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        unordered_map<int,int> mp;
        for(int i =0;i<k;i++)
        {
            mp[A[i]]++;
        }
        vector<int> ans;
        
        ans.push_back(mp.size());
        
        for(int i=k;i<n;i++)
        {
            if(mp[A[i-k]]==1){
                mp.erase(A[i-k]);
            } else {
                mp[A[i-k]]--;
            }
            mp[A[i]]++;
            ans.push_back(mp.size());
        }
        return ans;
    }
};
link = (https://practice.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1?page=1&difficulty[]=0&category[]=sliding-window&sortBy=submissions)
