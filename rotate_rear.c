#include "monty.h"
/**
  *rotate_rear- rotates the stack to the rear
  *@head: stack front
  *@lines: line number
  *Return: void
 */
void rotate_rear(stack_t **head, unsigned int lines)
{
	stack_t *temp;
	(void) lines;

	temp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = *head;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*head)->prev = temp;
	(*head) = temp;
}
