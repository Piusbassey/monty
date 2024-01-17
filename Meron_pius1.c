#include "monty.h"

/**
 * push - Pushes an element to the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number of the opcode.
 * @n: The integer to be pushed onto the stack.
 */
void push(stack_t **stack, unsigned int line_number, int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->prev = NULL;

	if (*stack == NULL)
	{
		new_node->next = NULL;
		*stack = new_node;
	}
	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
		*stack = new_node;
	}
}

/**
 * pall - Prints all the values on the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number of the opcode.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
