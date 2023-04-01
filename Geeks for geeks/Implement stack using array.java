class MyStack
{
    int top;
	int arr[] = new int[1000];

    MyStack()
	{
		top = -1;
	}
	
	//Function to push an integer into the stack.
    void push(int a)
	{
	    // Your code here
	    arr[++top]=a;
	} 
	
    //Function to remove an item from top of the stack.
	int pop()
	{
        // Your code here
        if(top==-1){
            return -1;
        }
        return arr[top--];
	}
}
LINK = (https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1?page=1&difficulty[]=-1&category[]=Stack&sortBy=submissions)
