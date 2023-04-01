class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    for(int i =0;i<n-1;i++)
	    {
	        if(arr[i]>arr[i+1])
	        {
	            arr[i]=arr[i+1];
	        }
	        else
	        {
	            arr[i]=-1;
	        }
	    }
	    arr[n-1]=-1;
	    return;
	}

};
LINK = (https://practice.geeksforgeeks.org/problems/immediate-smaller-element1142/1?page=1&difficulty[]=-1&category[]=Stack&sortBy=submissions)
