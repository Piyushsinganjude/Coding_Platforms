void MyStack ::push(int x) 
{
 struct StackNode *newNode = new StackNode(x);
 newNode->next = top;
 top = newNode;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if (top == NULL)
    return -1;
    struct StackNode *temp = top;
    int val = top->data;
    top = top->next;
    free(temp);
    return val;
}
LINK = (https://practice.geeksforgeeks.org/problems/implement-stack-using-linked-list/1?page=1&difficulty[]=-1&category[]=Stack&sortBy=submissions)
