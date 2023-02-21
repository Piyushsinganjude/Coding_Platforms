class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        long long int result =0;
        map<long long int,int>freq;
        long long int sum =0;
        freq[0]++;
        for(int i =1;i<=n;i++){
            sum += arr[i-1];
            freq[sum]++;
            result += freq[sum]-1;
        }
        return result;
    }
};
Link = (https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1?page=2&difficulty[]=1&category[]=Arrays&sortBy=submissions)
