/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
int lengthofLL(Node* head){
    Node* temp = head;
    int count  = 0;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    int length = lengthofLL(head);
    int n = length - K;

     if(n==0)
    {
      head=head->next;
        return head;
    }
    
    Node*temp  = head;
    int count  = 0;
     while(temp)
    {
        ++count;
        if(count==n)
        {
            break;
        }  
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
} 
//BY MY METHOD
int lengthofLL(Node* head){
    Node* temp = head;
    int count  = 0;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

Node* removeKthNode(Node* head, int K)
{
    int position = lengthofLL(head)-K;
    if(position == 0) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 0;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
    return head;

}
