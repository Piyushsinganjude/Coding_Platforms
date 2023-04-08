class Solution
{
   
    String reverseWords(String s)
    {
        Stack<Character> st = new Stack<>();
        StringBuilder sb =  new StringBuilder();
        
        for(int i = 0; i<s.length(); i++)
        {
            if(s.charAt(i) == '.')
            {
                while(!st.isEmpty()){
                    sb.append(st.pop());
                }
                
                sb.append('.');
            }
            
            else{
                
                st.push(s.charAt(i));
            }
        }
        
        while(!st.isEmpty()){
            
            sb.append(st.pop());
        }
        
        
        
        return sb.toString();
    }
}
LINK = https://practice.geeksforgeeks.org/problems/reverse-each-word-in-a-given-string1001/1?page=1&difficulty[]=1&category[]=Stack&sortBy=submissions
