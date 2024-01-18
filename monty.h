#ifndef MONTY_H
#define MONTY_H

/* STRUCTS */
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: Doubly linked list node structure for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: Opcode and its function for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* PROTOTYPES */
/**
 * Meron_pius1 - Print all values on `stack' starting from the top.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number being executed from the script file (currently unused).
 *
 * Return: void
 */
void Meron_pius1(stack_t **stack, unsigned int line_number);
/**
 * m_pint - Placeholder function, replace with actual implementation.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number being executed from the script file (currently unused).
 *
 * Return: void
 */
void m_pint(stack_t **stack, unsigned int line_number);

/**
 * monty_pint - Placeholder function, replace with actual implementation.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number being executed from the script file (currently unused).
 *
 * Return: void
 */
void monty_pint(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */
