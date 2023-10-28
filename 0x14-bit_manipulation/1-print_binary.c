#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int number;
	int num;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (number = n, num = 0; (number >>= 1) > 0; num++)
		;

	for (; num >= 0; num--)
	{
		if ((n >> num) & 1)
			printf("1");
		else
			printf("0");
	}
}
