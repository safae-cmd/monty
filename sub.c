#include "monty.h"
/**
  *sub- sustration
  *@head: stack front
  *@lines: line number
  *Return: void
 */
void sub(stack_t **head, unsigned int lines)
{
	stack_t *temp;
	int i, j;

	temp = *head;
	for (j = 0; temp != NULL; j++)
		temp = temp->next;
	if (j < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", lines);
		fclose(gvar.file);
		free(gvar.ptr);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	i = temp->next->n - temp->n;
	temp->next->n = i;
	*head = temp->next;
	free(temp);
}
