#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s:dtring
 * Return: lenght
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;

		s++;
	}
	return (len);
}
