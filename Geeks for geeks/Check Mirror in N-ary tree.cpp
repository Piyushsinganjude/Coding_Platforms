class Solution {
  public:
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        unordered_map<int,stack<int>>m;
        
        for(int i =0;i<2*e;i+=2)
        {
            m[A[i]].push(A[i+1]);
        }
        for(int i =0;i<2*e;i+=2)
        {
           if (m[B[i]].top()!=B[i+1]) return 0;
            m[B[i]].pop();
        }
        return 1;
    }
};
LINK = https://practice.geeksforgeeks.org/problems/check-mirror-in-n-ary-tree1528/1?page=1&difficulty[]=1&category[]=Stack&sortBy=submissions
