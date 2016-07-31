#include <cstdlib>
#include <iostream>
#include "linkedList.h"
using namespace std;

LinkedList::LinkedList() 
{
	curr = NULL;
	head = NULL;
	temp = NULL;
}

void LinkedList::addNode(int addData) 
{
	struct Node* n = new Node; 
	n->next = NULL;
	n->data = addData;

	if (head != NULL) 
	{
		curr = head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}

		curr->next = n;
	}
	else
	{
		head = n;
	}
} 

void LinkedList::deleteNode(int deleteData) 
{
	struct Node* delNode = NULL;
	temp = head;
	curr = head;

	while (curr != NULL && curr->data != deleteData)
	{
		temp = curr;
		curr = curr->next;
	}
	if (curr == NULL) {
		cout << "Element was not found\n";
	}
	else 
	{
		delNode = curr;
		curr = curr->next;
		temp->next = curr;
		if (delNode == head) {
			head = head->next;
			temp = NULL;
		}
		delete delNode;
		cout << "The value " << deleteData << " was removed.\n";
	}
}

void LinkedList::printList() 
{
	curr = head;
	while (curr != NULL) 
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}

void LinkedList::findMiddle(){
	if(head != NULL){
		struct Node* ptr1 = head;
		struct Node* ptr2 = head;
		while(ptr2 != NULL && ptr2->next != NULL)
		{
			ptr2 = ptr2->next->next;
			ptr1 = ptr1->next;
		}
		cout << "The middle node value is " << ptr1->data << "." << endl;
	}
}

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
