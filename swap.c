#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: the stack
 * @line_number: current line number of the bytecode file
 *
 * Return: Nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
    int temp = 0;

    if (*stack == NULL || (*stack)->next == NULL)
    {
        dprintf(2, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    temp = (*stack)->n;
    (*stack)->n = (*stack)->next->n;
    (*stack)->next->n = temp;
}
