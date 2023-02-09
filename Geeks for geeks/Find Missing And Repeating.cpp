 int ans[]=new int[2];
        for(int i=0;i<n;i++)
        {
            int z=Math.abs(arr[i]);
            if(arr[z-1]<0)
            ans[0]=z;
            else 
            arr[z-1]=-arr[z-1];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                ans[1]=i+1;
                break;
            }
        }
        return ans;
    }
Link =(https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?page=1&difficulty[]=1&category[]=Arrays&sortBy=submissions)
