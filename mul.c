#include "monty.h"
/**
 * _mul - multiplies top two elements of the stack.
 * @head: head of stack
 * @lines: line_number
 * Return: void
*/
void _mul(stack_t **head, unsigned int lines)
{
	stack_t *temp;
	int len = 0, i;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", lines);
		fclose(gvar.file);
		free(gvar.ptr);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	i = temp->next->n * temp->n;
	temp->next->n = i;
	*head = temp->next;
	free(temp);
}
