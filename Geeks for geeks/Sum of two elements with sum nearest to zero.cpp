sort(arr, arr+n);
            int i=0, j=n-1, max_ans=INT_MAX;
            while(i<j){
                if(abs(max_ans)>abs(arr[i]+arr[j])){
                    max_ans=arr[i]+arr[j];
                }
                else if(abs(max_ans)==abs(arr[i]+arr[j])){
                    max_ans=max(max_ans, arr[i]+arr[j]);
                }
                
                if(arr[i]+arr[j]>0) j--;
                else i++;
            }
            
            return max_ans;
LINK = (https://practice.geeksforgeeks.org/problems/two-numbers-with-sum-closest-to-zero1737/1?page=2&difficulty[]=1&category[]=Arrays&sortBy=submissions)
