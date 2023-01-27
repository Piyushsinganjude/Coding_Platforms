class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
         int balance=0,deficit=0,start=0;

        for(int i=0;i<n;i++)

        {

            balance+=p[i].petrol-p[i].distance;

            if(balance<0)

            {

                deficit+=balance;

                start=i+1;

                balance=0;

            }

        }

        if(balance+deficit>=0)

        return start;

        return -1;
    }
};
Link = (https://practice.geeksforgeeks.org/problems/circular-tour-1587115620/1?page=1&category[]=two-pointer-algorithm&sortBy=submissions)
