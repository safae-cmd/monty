#include "monty.h"
/**
 * add_top - adds the top two elements of the stack
 * @head: stack front
 * @lines: line number
 * Return: void
*/
void add_top(stack_t **head, unsigned int lines)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", lines);
		fclose(gvar.file);
		free(gvar.ptr);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	i = temp->n;
	temp->n = temp->next->n;
	temp->next->n = i;
}
