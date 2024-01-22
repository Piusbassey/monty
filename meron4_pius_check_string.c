#include "monty.h"

/**
 * check_string_ep - Checks if a st ring consists of alphanumeric chars.
 * @string: Input string to be checked.
 *
 * Return: True if all chars are alphanumerics, false if not.
 */
bool check_string_ep(char *string)
{
	int p;
	bool check_ep = true;
	for (p = 0; string[p]; p++)
	{
		if (!isalpha(string[p]) && !isdigit(string[p]))
		{
			check_ep = false;
			break;
		}
	}
	return check_ep;
}
