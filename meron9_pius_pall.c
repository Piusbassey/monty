#include "monty.h"

/**
 * print_all_ep - Prints all the elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number being printed from the script file.
 */
void print_all_ep(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_ep;
	(void)line_number;

	temp_ep = *stack;

	if (temp_ep == NULL)
	{};
	while (temp_ep != NULL)
	{
		printf("%d\n", temp_ep->n);
		temp_ep = temp_ep->next;
	}
}
