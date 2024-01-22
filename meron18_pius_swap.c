#include "monty.h"

/**
 * len_ep - Counts the number of elements in a stack.
 * @stack: A pointer to the head of the stack.
 *
 * Return: The number of elements in the stack.
 */
size_t len_ep(stack_t *stack)
{
	stack_t *ptr = stack;
	size_t count_ep = 0;

	if (!ptr)
		return (0);
	while (ptr)
	{
		ptr = ptr->next;
		count_ep++;
	}
	return (count_ep);
}

/**
 * swap_data_ep - Swaps the top two elements of the stack.
 * @stack: A pointer to the head of the stack.
 * @line_number: The current line number in the Monty bytecode file.
 */
void swap_data_ep(stack_t **stack, unsigned int line_number)
{
	int num_ep, num2_ep;
	stack_t *ptr = *stack;

	if (len_ep(ptr) < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	num_ep = ptr->n;
	num2_ep = ptr->next->n;
	ptr->n = num2_ep;
	ptr->next->n = num_ep;
}
