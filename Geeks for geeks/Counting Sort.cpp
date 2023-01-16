class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        int freq[256] ={0};
        for(int i =0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        string s ="";
        for(int i =0;i<256;i++){
            for(int j=0;j<freq[i];j++){
                s +=char(i);
            }
        }
        return s;
    }
};
Link - https://practice.geeksforgeeks.org/problems/counting-sort/1?page=2&difficulty[]=0&category[]=Sorting&sortBy=submissions
