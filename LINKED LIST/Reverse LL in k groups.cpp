#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node* nReverse(Node* head, int n,int b[],int i) {
    
    if(head == NULL) {
        return NULL;
    }
    if(i>=n){
        return head;
    }
    if(b[i]==0){
        i++;
        return nReverse(head,n,b,i);
    }
    
    
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count= 0;
    
    while( curr != NULL && count < b[i]) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (next != NULL) {
        head->next = nReverse(next, n,b,i+1);
    }
    return prev;
    
}
Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	// Write your code here.
    int i;
	return nReverse(head, n,b,i);
}
