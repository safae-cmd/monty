#include "monty.h"

/**
 * custom_div - divides the top two elements of the stack.
 * @head: stack head
 * @lines: line number
 * Return: void
 */
void custom_div(stack_t **head, unsigned int lines)
{
	stack_t *h;
	int stack_len = 0, result;

	h = *head;
	while (h)
	{
		h = h->next;
		stack_len++;
	}
	if (stack_len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", lines);
		fclose(gvar.file);
		free(gvar.ptr);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", lines);
		fclose(gvar.file);
		free(gvar.ptr);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
	result = h->next->n / h->n;
	h->next->n = result;
	*head = h->next;
	free(h);
}
