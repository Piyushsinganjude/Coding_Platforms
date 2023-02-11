 int row = 0;

     int col = 0;

     while(row<=n-1 && col<=m-1)

     {

         if(arr[row][col] == 1)

         {

             return row;

         }

         row++;

         if(row == n)

         {

             col++;

             row=0;

         }

     }

     return -1;

 }
 Link = (https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1?page=1&difficulty[]=1&category[]=Arrays&sortBy=submissions)
