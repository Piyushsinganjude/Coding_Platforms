class Solution
{
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    static int findPlatform(int arr[], int dep[], int n)
    {
      Arrays.sort(arr);
      Arrays.sort(dep);
      int count =0;
      int ans = 0;
      int i=0,j=0;
      while(i<n){
          if(arr[i]<=dep[j]){
              count++;
              ans = Math.max(ans,count);
              i++;
          }else if(arr[i]>dep[j]){
              count--;
              j++;
          }
      }
      return ans;
        
    }
    
}
Link =(https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1?page=1&difficulty[]=1&category[]=Arrays&sortBy=submissions)
