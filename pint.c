#include "monty.h"
/**
 * pint - prints the top
 * @head: stack head
 * @lines: line number
 * Return: void
*/
void pint(stack_t **head, unsigned int lines)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", lines);
		fclose(gvar.file);
		free(gvar.ptr);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
