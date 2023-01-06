## Stock buy and sell
The cost of stock on each day is given in an array A[] of size N. Find all the segments of days on which you buy and sell the stock so that in between those days your profit is maximum.

Note: Since there can be multiple solutions, the driver code will print 1 if your answer is correct, otherwise, it will return 0. In case there's no profit the driver code will print the string "No Profit" for a correct solution.

Example 1:

Input:
N = 7
A[] = {100,180,260,310,40,535,695}
Output:
1
Explanation:
One possible solution is (0 3) (4 6)
We can buy stock on day 0,
and sell it on 3rd day, which will 
give us maximum profit. Now, we buy 
stock on day 4 and sell it on day 6.
Example 2:

Input:
N = 5
A[] = {4,2,2,2,4}
Output:
1
Explanation:
There are multiple possible solutions.
one of them is (3 4)
We can buy stock on day 3,
and sell it on 4th day, which will 
give us maximum profit
```

## Solution 

```c++
class Solution{
public:
     //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        int a = 0;
        vector<vector<int>>ans;
        for(int i =0;i<n;i++){
            if(A[i]<=A[a]){
                a=i;
            }
            else
            {
                ans.push_back({a,i});
                a=i;
            }
        }
        return ans;
    }
};

```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)


```
## gfg
[Stock buy and sell](https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1?page=1&difficulty[]=0&category[]=Dynamic%20Programming&sortBy=submissions)
