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
		fprint(stderr, "L%d: stack is not enough\n",
