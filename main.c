#include "monty.h"
gvar_t gvar = {NULL, NULL, NULL, 0};
/**
* main - code interpreter
* @argc: args num
* @argv: argument
* Return: 0 if success
*/
int main(int argc, char *argv[])
{
	char *ptr;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	gvar.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		ptr = NULL;
		read_line = getline(&ptr, &size, file);
		gvar.ptr = ptr;
		count++;
		if (read_line > 0)
		{
			exec_opcode(ptr, &stack, count, file);
		}
		free(ptr);
	}
	free_st(stack);
	fclose(file);
return (0);
}
