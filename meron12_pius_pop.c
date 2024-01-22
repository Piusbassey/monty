#include "monty.h"

/**
 * pop_top_ep - Removes the top element of the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the source file where the function is called.
 */
void pop_top_ep(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;
	if (!ptr)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (ptr->next)
		ptr->next->prev = NULL;
	*stack = ptr->next;
	free(ptr);
	ptr = NULL;
}
