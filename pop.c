#include "monty.h"
/**
 * pop - prints the top
 * @head: stack head
 * @lines: line number
 * Return: void
*/
void pop(stack_t **head, unsigned int lines)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", lines);
		fclose(gvar.file);
		free(gvar.ptr);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = temp->next;
	free(temp);
}
