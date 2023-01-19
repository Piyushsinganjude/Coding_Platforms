struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
   map<int,int>m;
    Node *p=head1;
    Node *q=head2;
    while(p){
        m[p->data]++;
        p=p->next;
    }
    while(q){
        m[q->data]++;
        q=q->next;
    }
    Node *ans=new Node(-1);
    Node *t=ans;
    for(auto &it:m){
        Node *temp=new Node(it.first);
        t->next=temp;
        t=temp;
    }
    return ans->next;
}
Link - (https://practice.geeksforgeeks.org/problems/union-of-two-linked-list/1?page=2&difficulty[]=0&category[]=Sorting&sortBy=submissions)
