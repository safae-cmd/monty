#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct gvar_s - variables
 * @c: value
 * @file: pointer to monty file
 * @ptr: line content
 * @n: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct gvar_s
{
	char *c;
	FILE *file;
	char *ptr;
	int n;
}  gvar_t;
extern gvar_t gvar;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void custom_add(stack_t **stack_head, unsigned int line_counter);
void custom_div(stack_t **stack_head, unsigned int line_counter);
int exec_opcode(char *content, stack_t **head, unsigned int line, FILE *file);
void ranndom(void);
void free_st(stack_t *head);
void _mul(stack_t **head, unsigned int lines);
void pall(stack_t **head, unsigned int lines);
void _print_char(stack_t **head, unsigned int lines);
void pop(stack_t **head, unsigned int lines);
void top_print(stack_t **head, unsigned int lines);
void push(stack_t **head, unsigned int lines);
void queue(stack_t **head, unsigned int lines);
void addqueue(stack_t **head, int new);
void rotate_st(stack_t **head, unsigned int lines);
void rotate_rear(stack_t **head, unsigned int lines);
void sub(stack_t **head, unsigned int lines);
void add_top(stack_t **head, unsigned int lines);
void stack(stack_t **head, unsigned int lines);
void pint(stack_t **head, unsigned int lines);
void mod(stack_t **head, unsigned int lines);
void addnode(stack_t **head, int new);
void top_stack(stack_t **head, unsigned int lines);
#endif
