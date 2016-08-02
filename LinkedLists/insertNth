/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node *n = new Node;
    n->next = NULL;
    n->data = data;
    Node *curr, *forward;
    int count = 0;
    
    if (position == 0 && head != NULL){
            n->next = head;
            head = n;
        }

    if(head != NULL){
        curr = head;
        while(count < position - 1 && curr != NULL){
            count++;
            curr = curr->next;
        }
    }
        forward = curr->next;
        curr->next = n;
        n->next = forward;

    return head;
}

