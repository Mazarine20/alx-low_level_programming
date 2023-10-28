#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if there is a character different
 * from 0 or 1 or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, len;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (len = 1, num = 0, i--; i >= 0; i--, len *= 2)
	{
		if (b[i] == '1')
			num += len;
	}

	return (num);
}
