class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(head==NULL)
        return false;
        Node *p=head , *q=head;
        while(p != NULL && q != NULL && q->next != NULL){
            p = p->next;
            q = q->next->next;
            if(p==q)
            return true;
        }
        return false;
    }
};
Link = (https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1?page=1&difficulty[]=0&category[]=two-pointer-algorithm&sortBy=submissions)
