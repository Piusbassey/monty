#include "monty.h"

/**
 * meron_pius1_read- Prints all values on `stack' starting from the top
 * @stack: Double pointer to head of stack.
 * @line_number: Line number being executed from script file.
 *
 */
void meron_pius1_read(stack_t **stack, unsigned int line_number)
{
	char **mer_pi = malloc(2 * sizeof(char *));
	char e[] = " ";
	int limit = 0;
	int m;
	char *portion_ep;

	for (p = 0; p < 2; p++)
		mer_pi[p] = malloc(100 * sizeof(char));
	tri_e(buffer_ep);
	portion_ep = strtok(buffer_ep, e);

	while (portion_ep != NULL && limit < 2)
	{
		strcpy(mer_pi =[limit], portion_ep);
		limit++;
		portion_ep = strtok(NULL, e);
	}
	return (mer_pi);
}