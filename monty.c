#include "monty.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *file;
    stack_t *stack = NULL;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    // Your logic for processing each line goes here

    fclose(file);
    free_stack(stack);
    return 0;
}
