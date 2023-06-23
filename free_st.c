#include "monty.h"
/**
* free_st - frees **stack_t doubly linked list
* @head: head of the stack
*/
void free_st(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
