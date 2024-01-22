#include "monty.h"

/**
 * rotr_stack_ep - Rotates the stack to the bottom.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the source file where the function is called.
 */
void rotr_stack_ep(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;
	int num_ep;
	(void)line_number;

	ptr = *stack;

	if (!ptr)
	{}
	else
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}

		num_ep = ptr->n;

		while (ptr->prev)
		{
			ptr->n = ptr->prev->n;
			ptr = ptr->prev;
		}
		ptr->n = num_ep;
	}
}
