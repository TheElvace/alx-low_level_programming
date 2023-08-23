#include "main.h"

/**
 *_strncpy - function that copies a string
 *
 * @src: string source
 * @dest: string destination
 * @n: int length
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int b;

	for (b = 0; b < n && *(src + b); b++)
	{
		*(dest + b) = *(src + b);
	}
	for (; b < n; b++)
	{
	*(dest + b) = '\0';
	}

	return (dest);
}
