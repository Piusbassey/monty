#include "monty.h"

/**
 * print_string_ep - Prints the string of ASCII chars on the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the source file where the function is called.
 */
void print_string_ep(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;
	(void)line_number;

	while (ptr && ptr->n != 0 && ((ptr->n > 64 && ptr->n < 91) || (ptr->n > 96 && ptr->n < 123)))
	{
		printf("%c", ptr->n);
		ptr = ptr->next;
	}
	printf("\n");
}
