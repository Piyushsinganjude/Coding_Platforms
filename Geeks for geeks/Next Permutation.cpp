class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        bool res = next_permutation(arr.begin(),arr.end());
        if(res)
        {
            return arr;
        }
        else{
            sort(arr.begin(),arr.end());
            return arr;
        }
    }
};
Link =(https://practice.geeksforgeeks.org/problems/next-permutation5226/1?page=2&difficulty[]=1&category[]=Arrays&sortBy=submissions)
