#include "monty.h"

/**
 * sub_data_ep - Subtracts the top element of the stack from the second top.
 * @stack: A pointer to the head of the stack.
 * @line_number: The current line number in the Monty bytecode file.
 */
void sub_data_ep(stack_t **stack, unsigned int line_number)
{
	int res_ep;
	stack_t *ptr = *stack;

	if (len_ep(*stack) < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	res_ep = ptr->next->n - ptr->n;
	ptr->next->n = res_ep;
	pop_top_ep(stack, line_number);
}
