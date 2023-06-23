#include "monty.h"
/**
  *rotate_st - rotates the stack to the top
  *@head: stack front
  *@lines: line number
  *Return: void
 */
void rotate_st(stack_t **head, unsigned int lines)
{
	stack_t *temp = *head, *p;
	(void) lines;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	p = (*head)->next;
	p->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = p;
}
