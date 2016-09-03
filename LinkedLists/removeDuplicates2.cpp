/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
   Node *curr, *nextNode;
   curr = head;
   
    while(curr->next != NULL){
        if(curr->data == curr->next->data){
            curr->next = curr->next->next;   
        }
        else{
            curr = curr->next;
        }
    }
    return head;  
}
