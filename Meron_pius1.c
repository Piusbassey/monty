#include "monty.h"

/**
 *  Meron_pius1- Prints all values on `stack' starting from the top
 * @stack: Double pointer to head of stack.
 * @line_number: Line number being executed from script file.
 *
 */
void Meron_pius1(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	(void)(line_number);

	head = *stack;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		if (head == NULL)
		{
			return;
		}
	}
}
