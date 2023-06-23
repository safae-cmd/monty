#include "monty.h"
/**
 * top_print - prints the top
 * @head: stack head
 * @lines: line number
 * Return: void
*/
void top_print(stack_t **head, unsigned int lines)
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
