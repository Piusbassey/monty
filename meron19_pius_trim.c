#include "monty.h"

/**
 * trim_ep - Trims trailing whitespace charactes from a string.
 * @string: A pointer to the string to be trimmed.
 */
void trim_ep(char *string)
{
	int p = strlen(string) - 1;

	while (p > 0)
	{
		if (isspace(string[p]))
			p--;
		else
			break;
	}

	string[p + 1] = '\0';
}
