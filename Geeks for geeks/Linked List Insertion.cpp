class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       Node* element = new Node(x);
       element ->next = head;
       return element;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       Node* temp = new Node(x);
       if(head == NULL)
       return temp;
       Node* curr = head;
       while(head->next != NULL){
           head = head->next;
       }
       head->next = temp;
       return curr;
    }
};
LINK = (https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1?page=1&difficulty[]=-1&category[]=Linked%20List&sortBy=submissions)
