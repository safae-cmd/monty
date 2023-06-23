#include "monty.h"
/**
 * push - adds node to the stack
 * @head: head
 * @lines: line number
 * Return: void
*/
void push(stack_t **head, unsigned int lines)
{
	int i, j = 0, f = 0;

	if (gvar.c)
	{
		if (gvar.c[0] == '-')
			j++;
		for (; gvar.c[j] != '\0'; j++)
		{
			if (gvar.c[j] > 57 || gvar.c[j] < 48)
				f = 1; }
		if (f == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", lines);
			fclose(gvar.file);
			free(gvar.ptr);
			free_st(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", lines);
		fclose(gvar.file);
		free(gvar.ptr);
		free_st(*head);
		exit(EXIT_FAILURE); }
	i = atoi(gvar.c);
	if (gvar.n == 0)
		addnode(head, i);
	else
		addqueue(head, i);
}
