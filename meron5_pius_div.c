#include "monty.h"

/*
 * div_data_ep - Divides the second element by the top element of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number being executed from the script file.
 *
 * This function divides the value of the second element by the value of the top
 * element of the stack. If the stack does not have at least two elements, it
 * prints an error message to stderr and exits with a failure status. Additionally,
 * if the top element is zero, it prints a division by zero error.
 *
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number being executed from the script file.
 */
void div_data_ep(stack_t **stack, unsigned int line_number)
{
	int res_ep;
	stack_t *ptr = *stack;

	if (len_ep(*stack) < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (ptr->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	res_ep = ptr->next->n / ptr->n;
	ptr->next->n = res_ep;
	pop_top_ep(stack, line_number);
}
