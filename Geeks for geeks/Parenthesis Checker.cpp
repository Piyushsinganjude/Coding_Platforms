stack<char>st;
        for(int i=0;i<x.length();i++){
            if(!st.empty() && (st.top()==')'||st.top()==']'|| st.top()=='}')){
                return false;
            }else if(!st.empty() &&((st.top()=='(' && x[i]==')')||(st.top()=='{' && x[i]=='}')||(st.top()=='[' && x[i]==']'))){
                st.pop();
            }else{
                st.push(x[i]);
            }
        }
        // Your code here
       if(!st.size()){
           return true;
       }
       return false;
        
        
    }
LINK = (https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1?page=1&difficulty[]=0&category[]=Stack&sortBy=submissions)
