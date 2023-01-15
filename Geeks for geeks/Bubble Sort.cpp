class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        for(int i=0;i<n-1;i++){
            for(int j =0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]= temp;
                }
            }
        }
    }
};
Link - (https://practice.geeksforgeeks.org/problems/bubble-sort/1?page=1&difficulty[]=0&category[]=Sorting&sortBy=submissions
