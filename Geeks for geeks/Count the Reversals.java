class Sol
{
    int countRev (String s)
    {
        if(s.length()%2!=0) return -1;
        
        int open = 0,close=0,rev=0;
        
        for(int i =0;i<s.length();i++)
        {
            if(s.charAt(i)=='{') open++;
            else
            {
                if(open==0) close++;
                else open--;
            }
        }
        rev=(int)(Math.ceil(open/2.0) + Math.ceil(close/2.0));
        return rev;
    }
}
link = https://practice.geeksforgeeks.org/problems/count-the-reversals0401/1?page=1&difficulty[]=1&category[]=Stack&sortBy=submissions
