for(int i=n-1;i>0;i--){
       // Find Index of Maximum element from i to n
       int max_ele_pos = select(arr,i);
       // Swap currentIndex element with Maximum element index
       int temp = arr[i];
       arr[i] = arr[max_ele_pos];
       arr[max_ele_pos] = temp;
   }
Link - (https://practice.geeksforgeeks.org/problems/selection-sort/1?page=1&difficulty[]=0&category[]=Sorting&sortBy=submissions)
