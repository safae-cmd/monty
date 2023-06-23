#include "monty.h"

/**
 * custom_add - adds the top two elements of the stack.
 * @head: head
 * @lines: line number
 * Return: void
 */
void custom_add(stack_t **head, unsigned int lines)
{
	stack_t *temp;
	int stack_len = 0, result;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		stack_len++;
	}
	if (stack_len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", lines);
		fclose(gvar.file);
		free(gvar.ptr);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	result = temp->n + temp->next->n;
	temp->next->n = result;
	*head = temp->next;
	free(temp);
}
