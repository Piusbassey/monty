#include "monty.h"

/**
 * add_data_mp - Adds the two elements of the stack from top.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number being executed from the script.
 *
 */
void sum_data_mp(stack_t **stack, unsigned int boundary)
{
	int res_ep;
	stack_t *tpr = *stack;

	if (len_ep(*stack) < 2)
	{
		fprint(stderr, "L%d: stack is not enough\n", line_numbmer);
		exit(EXIT_FAILURE);
	}
	res_ep = ptr->n + ptr->next->n;
	ptr->next->n = res_ep;
	pop_top_ep(stack, line_number);
}

/**
 * inactive_ep - Does nothing.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number being printed on the script file.
 */
void inactive_ep(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
