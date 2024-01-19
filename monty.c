#include "monty.h"

/**
 * main - Monty interpreter entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    /* Initialize the stack */
    stack_t *stack = NULL;

    /* Open and process the Monty bytecode file */
    process_file(argv[1], &stack);

    /* Free the stack */
    free_stack(&stack);

    return EXIT_SUCCESS;
}

/**
 * process_file - Open and process the Monty bytecode file
 * @filename: Name of the Monty bytecode file
 * @stack: Pointer to the stack
 */
void process_file(char *filename, stack_t **stack)
{
    FILE *file;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    unsigned int line_number = 0;

    file = fopen(filename, "r");
    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", filename);
        exit(EXIT_FAILURE);
    }

    while ((read = getline(&line, &len, file)) != -1)
    {
        line_number++;
        /* Process each line of the Monty bytecode file */
        process_line(line, stack, line_number);
    }

    fclose(file);
    if (line)
        free(line);
}

/**
 * process_line - Process a line of Monty bytecode
 * @line: Line of Monty bytecode
 * @stack: Pointer to the stack
 * @line_number: Line number in the file
 */
void process_line(char *line, stack_t **stack, unsigned int line_number)
{
    char *opcode, *argument;

    /* Tokenize the line to get the opcode and argument */
    opcode = strtok(line, " \n\t");
    if (opcode == NULL || opcode[0] == '#')
        return;

    argument = strtok(NULL, " \n\t");
    if (strcmp(opcode, "push") == 0)
    {
        if (!argument || !is_integer(argument))
        {
            fprintf(stderr, "L%d: usage: push integer\n", line_number);
            free_stack(stack);
            exit(EXIT_FAILURE);
        }

        push(stack, atoi(argument));
    }
    else if (strcmp(opcode, "pall") == 0)
    {
        pall(*stack);
    }
    /* Add more opcode handling logic as needed */
}

/**
 * is_integer - Check if a string represents a valid integer
 * @str: String to check
 *
 * Return: 1 if the string is a valid integer, 0 otherwise
 */
int is_integer(char *str)
{
    int i = 0;
    if (str[i] == '-')
        i++;
    for (; str[i] != '\0'; i++)
    {
        if (!isdigit(str[i]))
            return 0;
    }
    return 1;
}
