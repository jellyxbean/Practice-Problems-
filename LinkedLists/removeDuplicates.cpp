void LinkedList::removeDuplicates(){

	struct Node* ptr1 = head;
	struct Node* ptr2;
	struct Node* dup;

	while(ptr1 != NULL && ptr1->next != NULL){
	ptr2 = ptr1;
		while(ptr2->next != NULL){
			if (ptr2->next->data == ptr1->data){
				dup = ptr2->next;
				ptr2->next = ptr2->next->next;
				delete dup;
			}
			else
			{
				ptr2 = ptr2->next;

			}
		}
		ptr1 = ptr1->next;
	}
}
