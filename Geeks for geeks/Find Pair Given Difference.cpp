bool findPair(int arr[], int size, int n){
    for(int i =0;i<size;i++){
        for(int j =i+1;j<size;j++){
            if(abs(arr[i]-arr[j])==n){
                return true;
            }
        }
    }
    return false;
    
}
Link - (https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1?page=1&difficulty[]=0&category[]=Sorting&sortBy=submissions)
