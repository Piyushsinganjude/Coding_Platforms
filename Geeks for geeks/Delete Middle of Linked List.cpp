Node* deleteMid(Node* head)
{
    Node * slow = head , *fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast=fast->next->next;
    }
    if(slow->next==NULL)
    {
        head->next = NULL;
        return head;
    }
    slow->data = slow->next->data;
    slow->next=slow->next->next;
    return head;
}
Link = (https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1?page=1&difficulty[]=0&category[]=two-pointer-algorithm&sortBy=submissions)
