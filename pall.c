#include "monty.h"
/**
 * pall - prints the stack
 * @head: head
 * @lines: unused
 * Return: void
*/
void pall(stack_t **head, unsigned int lines)
{
	stack_t *temp;
	(void) lines;

	temp = *head;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
