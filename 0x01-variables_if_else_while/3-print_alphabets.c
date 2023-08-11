#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'g'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'G'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
