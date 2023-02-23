 int maxIndexDiff(int A[], int N) 
    { 
        int ans = 0;
        for(int i =0;i<N;i++){
            int j = N-1;
            while(i<j){
                if(A[i]<=A[j]){
                    ans = max(ans,j-i);
                    break;
                }
                j--;
            }
        }
        return ans;
    }
};
Link = (https://practice.geeksforgeeks.org/problems/maximum-index-1587115620/1?page=2&difficulty[]=1&category[]=Arrays&sortBy=submissions)
