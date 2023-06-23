#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @new: new value
 * Return: void
*/
void addnode(stack_t **head, int new)
{

	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = new;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
