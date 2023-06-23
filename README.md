<div align="center">
  <img src="monty.png" alt="Monty Bytecode Interpreter">
</div>

This repository contains a Monty Bytecode Interpreter implemented in C. It is designed to execute Monty byte code files and follows specific guidelines and requirements.

## Requirements

- Editors: vi, vim, emacs
- Compiler: gcc on Ubuntu 20.04 LTS
- Compiler options: -Wall -Werror -Wextra -pedantic -std=c89
- Code should follow the Betty style guidelines
- Only one global variable is allowed
- Maximum of 5 functions per file
- C standard library can be used
- Function prototypes should be included in the monty.h header file
- Header files should be include guarded

## Data Structures

The interpreter uses the following data structures:

- stack_s: Doubly linked list node structure representing a stack or queue
-  instruction_s: Structure for an opcode and its associated function

## Compilation & Output

To compile the code, use the following command:
```shell
$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```
## Usage

To run the Monty Bytecode Interpreter, use the following command:
```shell
$ ./monty file
```
Replace file with the path to the Monty byte code file. If no file or more than one argument is provided, an error message will be displayed. If the file cannot be opened or contains an invalid instruction, respective error messages will be shown. Memory allocation failures will be indicated with an error message.
