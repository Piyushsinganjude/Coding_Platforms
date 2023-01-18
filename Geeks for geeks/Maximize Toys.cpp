class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
       int count = 0;
        sort(arr.begin(), arr.end());
        int i = 0;
        while(K >= arr[i] && i < N){
            count++;
            K-=arr[i++]; 
        }
        return count;
    }
};
https://practice.geeksforgeeks.org/problems/maximize-toys0331/1?page=1&difficulty[]=0&category[]=Sorting&sortBy=submissions
