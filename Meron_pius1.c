#include "monty.h"

/**
 * Meron_pius1 - Print all values on `stack' starting from the top.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number being executed from the script file (currently unused).
 *
 * Return: void
 */
void Meron_pius1(stack_t **stack, unsigned int line_number)
{
    stack_t *head = *stack;

    while (head != NULL)
    {
        printf("%d\n", head->n);

        // Move to the next node
        head = head->next;

        // Check if we have reached the top of the stack (circular linked list)
        if (head == *stack)
        {
            return;  // Exit the loop to avoid infinite loop in circular stack
        }
    }
}
