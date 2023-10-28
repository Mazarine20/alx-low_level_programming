#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count=0;
	unsigned long int xor = n ^ m;
	while (xor != 0) 
	{
		if ((xor & 1) == 1) 
		{
			count++;
		}
		xor >>= 1;
	}
	return count;
}
