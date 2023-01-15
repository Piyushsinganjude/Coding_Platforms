for(int i=0;i<n;i++)
{
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    }
Link - (https://practice.geeksforgeeks.org/problems/insertion-sort/1?page=1&difficulty[]=0&category[]=Sorting&sortBy=submissions)
