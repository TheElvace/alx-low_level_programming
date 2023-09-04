#include <stdlib.h>
#include "main.h"

/**
 * *create_array - this creates an array of chars
 * and initializes with a specific char
 * @size: the size of the array to create
 * @c: the char to initialize the array c
 * Return: a pointer to the array for success, NULL for error
 */
char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int k = 0;

	if (size == 0)
		return (NULL);

	j = (char *) malloc(sizeof(char) * size);

	if (j == NULL)
		return (0);

	while (k < size)
	{
		*(j + k) = c;
		k++;
	}

	*(j + k) = '\0';

	return (j);
}
