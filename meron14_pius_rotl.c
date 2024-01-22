#include "monty.h"

/**
 * rotl_stack_ep - Rotates the stack to the top.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the source file where the function is called.
 */
void rotl_stack_ep(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;
	int num_ep;
	(void)line_number;

	ptr = *stack;

	if (!ptr)
	{}
	else
	{
		num_ep = ptr->n;
		while (ptr->next)
		{
			ptr->n = ptr->next->n;
			ptr = ptr->next;
		}
		ptr->n = num_ep;
	}
}

