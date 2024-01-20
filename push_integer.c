#include "monty.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

void push_integer(stack_t **stack, unsigned int line_number)
{
    const char *arg;
    int n;

    arg = strtok(NULL, "\n\t\r ");
    if (arg == NULL || check_for_digit(arg))
    {
        dprintf(STDERR_FILENO,
                "L%u: usage: push integer\n",
                line_number);
        exit(EXIT_FAILURE);
    }

    n = atoi(arg);
    if (!add_node(stack, n))
    {
        dprintf(STDERR_FILENO, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    var.stack_len++;
}
