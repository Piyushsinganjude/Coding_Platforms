class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    int count = 0;
	    sort(arr,arr+n);
	    unordered_map<int,int>mp;
	    for(int i =0;i<n;i++){
	        mp[arr[i]]++;
	    }
	   for(int i =0;i<n;i++){
	       for(int j =i+1;j<n;j++){
	           int sum = arr[i] + arr[j];
	           if(mp[sum]){
	               count++;
	           }
	       }
	   }
	   return count;
	}
};
link - (https://practice.geeksforgeeks.org/problems/count-the-triplets4615/1?page=1&difficulty[]=0&category[]=Sorting&sortBy=submissions)
