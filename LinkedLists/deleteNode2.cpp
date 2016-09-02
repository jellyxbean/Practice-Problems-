/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  Node *curr, *temp;
  if(position == 0 && head != NULL){
      temp = head;
      head = head->next;
      temp->next = NULL;
      delete temp;
  }
  
  else{
  int count = 0;
  if(head != NULL){
      curr = head;
      while(count < position - 1 && curr != NULL){
          count++;
          curr = curr->next;
      }
      curr->next = curr->next->next; 
  }
  }
    return head;
}
