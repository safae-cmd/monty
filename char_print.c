#include "monty.h"
/**
 * _print_char - prints the char at the top of the stack
 * @head: head
 * @lines: line number
 * Return: void
*/
void _print_char(stack_t **head, unsigned int lines)
{
	stack_t *temp;

	temp = *head;
	if (!temp)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", lines);
		fclose(gvar.file);
		free(gvar.ptr);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
	if (temp->n > 127 || temp->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", lines);
		fclose(gvar.file);
		free(gvar.ptr);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", temp->n);
}
