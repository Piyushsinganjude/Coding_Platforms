class Solution{
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long max = INT_MIN;
        long sum =0;
       for(int j=0;j<K;j++){
                sum+=Arr[j];
        }
        max = sum;
        for(int i=K;i<N;i++){
            sum=sum+Arr[i]-Arr[i-K];
           if(sum>max) {
               max = sum;
           }
        }
        return max;  
LINK = (https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?page=1&difficulty[]=-1&category[]=sliding-window&sortBy=submissions)
