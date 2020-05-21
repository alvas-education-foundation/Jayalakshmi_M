//Write a C program to construct a singly linked list by removing duplicate elements in the sorted linked list
Description:
Take a sorted list and traverse the list. Compare the current node element with next adjacent node. If it is same then delete second element, if not retain. Finally print the resulting list.
Sample output:
Given list {1,2,2,3,3,3,4}
Resulting list{1,2,3,4}//


/* C Program to remove duplicates from a sorted linked list */
#include<stdio.h> 
#include<stdlib.h> 


struct Node 
{ 
	int data; 
	struct Node* next; 
}; 


void removeDuplicates(struct Node* head) 
{ 

	struct Node* current = head; 

	
	struct Node* next_next; 
	

	if (current == NULL) 
	return; 


	while (current->next != NULL) 
	{ 

	if (current->data == current->next->data) 
	{ 
			
		next_next = current->next->next; 
		free(current->next); 
		current->next = next_next; 
	} 
	else 
	{ 
		current = current->next; 
	} 
	} 
} 


void push(struct Node** head_ref, int new_data) 
{ 

	struct Node* new_node = 
			(struct Node*) malloc(sizeof(struct Node)); 
			

	new_node->data = new_data; 
				
	
	new_node->next = (*head_ref);	 

	(*head_ref) = new_node; 
} 

void printList(struct Node *node) 
{ 
	while (node!=NULL) 
	{ 
	printf("%d ", node->data); 
	node = node->next; 
	} 
} 


int main() 
{ 
	
	struct Node* head = NULL; 

	push(&head, 4); 
	push(&head, 3); 
	push(&head, 3); 
	push(&head, 3); 
	push(&head, 2); 
	push(&head, 2);	
	push(&head, 1);

	printf("\n given list "); 
	printList(head); 


	removeDuplicates(head); 

	printf("\n resulting list  ");		 
	printList(head);			 
	
	return 0; 
} 
