#ifndef MONTY_H
#define MONTY_H

#include <stddef.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/**
 * Function prototypes
 */
void meron_pius1_read(stack_t **stack, unsigned int line_number);
void sum_data_mp(stack_t **stack, unsigned int boundary);
void inactive_ep(stack_t **stack, unsigned int line_number);
void end_ep(stack_t **stack);
bool check_string_ep(char *string);
void div_data_ep(stack_t **stack, unsigned int line_number);
void free_stack_ep(stack_t *top_ep);
void mod_data_ep(stack_t **stack, unsigned int line_number);
void mul_data_ep(stack_t **stack, unsigned int line_number)

#endif /* MONTY_H */
