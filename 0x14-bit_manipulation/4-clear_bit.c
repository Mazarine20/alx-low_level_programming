#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number in which to clear the bit.
 * @index: The index, starting from 0, of the bit to clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int p;

	if (index > 64)
		return (-1);
	p = index;
	for (i = 1; p > 0; i *= 2, p--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
