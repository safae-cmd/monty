#include "monty.h"

void ranndom(void);
/**
 * exec_opcode - executes the custom opcode
 * @content: line content
 * @head: head of the linked list - stack
 * @line: line_counter
 * @file: pointer to monty file
 * Return: no return
 */
int exec_opcode(char *content, stack_t **head, unsigned int line, FILE *file)
{
	instruction_t custom_opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", top_print},
		{"pop", pop},
		{"swap", add_top},
		{"add", custom_add},
		{"sub", sub},
		{"div", custom_div},
		{"mul", _mul},
		{"mod", mod},
		{"pchar", _print_char},
		{"pstr", top_print},
		{"rotl", rotate_st},
		{"rotr", rotate_rear},
		{"queue", queue},
		{"stack", stack},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *opcode;

	opcode = strtok(content, " \n\t");
	if (opcode && opcode[0] == '#')
		return (0);
	gvar.c = strtok(NULL, " \n\t");
	while (custom_opcodes[i].opcode && opcode)
	{
		if (strcmp(opcode, custom_opcodes[i].opcode) == 0)
		{
			custom_opcodes[i].f(head, line);
			return (0);
		}
		i++;
	}
	if (opcode && custom_opcodes[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line, opcode);
		fclose(file);
		free(content);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
	return (1);
}

/**
 * ranndom - random
 * Return: void
 */
void ranndom(void)
{
	;
}
