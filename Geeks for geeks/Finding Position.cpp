class Solution {
  public:
    long long int nthPosition(long long int n){
        if(n==1)
        {
            return 1;
        }
        int ans = nthPosition(n/2);
        return 2*ans;
    }
    
};
Link = (https://practice.geeksforgeeks.org/problems/finding-position2223/1?page=1&difficulty[]=0&category[]=Recursion&sortBy=submissions)
