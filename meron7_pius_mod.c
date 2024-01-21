#include "monty.h"

/*
 * mod_data_ep - Computes the remainder of the second element divided by the top element.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number being executed from the script file.
 *
 */
void mod_data_ep(stack_t **stack, unsigned int line_number)
{
	int res_ep;
	stack_t *ptr = *stack;

	if (len_ep(*stack) < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (ptr->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	res_ep = ptr->next->n % ptr->n;
	ptr->next->n = res_ep;
	pop_top_ep(stack, line_number);
}

