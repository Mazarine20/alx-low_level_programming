#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the numbers of base 16 in lowercase using putchar.
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)

{

	int num;

	char letter;



	for (num = 0; num < 10; num++)

		putchar((num % 10) + '0');



	for (letter = 'a'; letter <= 'f'; letter++)

		putchar(letter);



	putchar('\n');



	return (0);

}
