class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
   void func(int ind, vector<int> &curr, vector<int> &arr, int sum, vector<vector<int>>&res) {
        while(ind>0 && ind<arr.size() && arr[ind]==arr[ind-1]) ind++;

        if(ind == arr.size()) {
            if(sum == 0) {
                res.push_back(curr);
            }
            return;
        }
        
        if(sum >= arr[ind]) {
            curr.push_back(arr[ind]);
            func(ind, curr, arr, sum-arr[ind], res);
            curr.pop_back();
        }
        
        func(ind+1, curr, arr, sum, res);
        
    }
    vector<vector<int>> combinationSum(vector<int> &A, int B) {
        sort(A.begin(), A.end());
        vector<vector<int>> res;
        vector<int> curr;
        func(0, curr, A, B, res);
        return res;
    }
};
Link = (https://practice.geeksforgeeks.org/problems/combination-sum-1587115620/1?page=1&difficulty[]=1&category[]=Recursion&sortBy=submissions)
