void StackQueue :: push(int x)
{
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(x);
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        int ans;
        if(!s1.empty()){
            ans= s1.top();
            s1.pop();
        }else
        {
            ans = -1;
        }
        return ans;
}
link = https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1?page=1&difficulty[]=0&category[]=Stack&sortBy=submissions
