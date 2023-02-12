sort(arr,arr+n);

     vector<int>v;

     int i=0; 

     int j=n-1;

     while(i<j){

         swap(arr[i],arr[j]);

         i++;

         j--;

     }

     for(int a=0; a<k; a++){

         v.push_back(arr[a]);

     }

     return v;
     link =(https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1?page=2&difficulty[]=1&category[]=Arrays&sortBy=submissions)
