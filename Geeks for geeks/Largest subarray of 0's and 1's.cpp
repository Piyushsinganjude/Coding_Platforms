class Solution{
  public:
    int maxLen(int arr[], int N)
    {
     map<int,int> mp;
        int ans=0;
        for(int i=0; i<N; ++i) {
            if(arr[i]==0) {
                arr[i]=-1;
            }
        }
        mp[0]=-1;
        int sum=0;
        for(int i=0; i<N; ++i) {
            sum+=arr[i];
            auto it=mp.find(sum);
            if(it==mp.end()) {
                mp[sum]=i;
            }
            else {
                ans=max(ans,i-it->second);
            }
        }
        return ans;
    }
};
LINK = (https://practice.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1?page=1&difficulty[]=0&category[]=sliding-window&sortBy=submissions)
