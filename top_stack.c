#include "monty.h"
/**
 * top_stack - prints the string starting at the top of the stack
 * @head: stack head
 * @lines: line number
 * Return: void
*/
void top_stack(stack_t **head, unsigned int lines)
{
	stack_t *temp;
	(void) lines;

	temp = *head;
	while (temp)
	{
		if (temp->n > 127 || temp->n <= 0)
		{
			break;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
