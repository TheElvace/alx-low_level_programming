#include <stdio.h>

/**
 * print_to_98 - This prints all natural numbers in order from input to 98,
 *               separated by a comma with a space following.
 * @n: This is the number to begin counting at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
