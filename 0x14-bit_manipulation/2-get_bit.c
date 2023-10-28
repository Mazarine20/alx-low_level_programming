#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number to search the bit from.
 * @index: The index, starting from 0.
 *
 * Return: The value of the bit at index or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index > 64)
		return (-1);

	num = n >> index;

	return (num & 1);
}
