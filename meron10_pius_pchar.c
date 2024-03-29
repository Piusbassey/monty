#include "monty.h"

/**
 * print_top_char_ep - Prints the char value at the top of the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the source file where the function is called.
 */
void print_top_char_ep(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;

	if (ptr == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (ptr->n < 65 || (ptr->n > 90 && ptr->n < 97) || ptr->n > 122)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", ptr->n);
}
