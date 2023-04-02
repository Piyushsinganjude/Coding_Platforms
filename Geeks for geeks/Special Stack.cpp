class GfG{
    Stack<Integer> stack = new Stack<>();
	public void push(int a,Stack<Integer> s)
	{
	    if(s.size() == 0 || stack.peek() > a)
	    {
	        stack.push(a);
	    }
	    s.push(a);
	}
	public int pop(Stack<Integer> s)
        {
            if(s.size() == 0) return -1;
            if(stack.peek() == s.peek()) stack.pop();
            return s.pop();
	}
	public int min(Stack<Integer> s)
        {
           if(stack.size() == 0) return -1;
           return stack.peek();
	}
	public boolean isFull(Stack<Integer>s, int n)
        {
           return s.size() == n;
	}
	public boolean isEmpty(Stack<Integer>s)
        {
           return s.size() == 0;
	}
}
link = https://practice.geeksforgeeks.org/problems/special-stack/1?page=1&difficulty[]=0&category[]=Stack&sortBy=submissions
