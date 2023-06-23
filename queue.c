#include "monty.h"

/**
 * queue - prints the top
 * @head: head
 * @lines: line number
 * Return: void
*/
void queue(stack_t **head, unsigned int lines)
{
	(void) head;
	(void) lines;
	gvar.n = 1;
}

/**
 * addqueue - add node to the tail stack
 * @new: new value
 * @head: front of the stack
 * Return: void
*/
void addqueue(stack_t **head, int new)
{
	stack_t *new_node, *p;

	p = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = new;
	new_node->next = NULL;
	if (p)
	{
		while (p->next)
			p = p->next;
	}
	if (!p)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		p->next = new_node;
		new_node->prev = p;
	}
}
