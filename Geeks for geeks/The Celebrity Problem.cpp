class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
         stack<int> s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        while(s.size()>1){
            int a=s.top();s.pop();
            int b=s.top();s.pop();

// if a & b both knows each other none of them can be celebrity so dont push any in stack 

            if(M[a][b] && M[b][a])continue;
            else if(M[a][b])s.push(b);
            else if(M[b][a]) s.push(a);
        }

// if stack got empty them there is no celebrity 
        if(s.empty()) return -1;
        int c=s.top();
        for(int i=0;i<n;i++)
        {
            if(M[c][i]!= 0) return -1;
            if(c!=i && M[i][c]==0) return -1;
        }
        return c;
    }
};
LINK = https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1?page=1&difficulty[]=1&category[]=Stack&sortBy=submissions
