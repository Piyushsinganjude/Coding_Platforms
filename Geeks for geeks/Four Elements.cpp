bool find4Numbers(int A[], int n, int X)  
{
    sort(A,A+n);
    for(int i =0;i<n-3;i++){
        for(int j =i+1;j<n-2;j++){
            for(int k = j+1;k<n-1;k++){
                for(int l = k+1;l<n;l++){
                    if(A[i]+A[j]+A[k]+A[l]==X){
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
LINK = (https://practice.geeksforgeeks.org/problems/four-elements2452/1?page=1&difficulty[]=0&category[]=two-pointer-algorithm&sortBy=submissions)
