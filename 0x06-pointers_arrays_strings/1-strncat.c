#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: string source
 * @dest: string destination
 * @n: int length
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, m;

	for (l = 0; dest[l] != '\0'; l++)
	{
		continue;
	}
	for (m = 0; src[m] != '\0' && m < n; m++)
	{
		dest[l + m] = src[m];
	}
	dest[l + m] = '\0';
	return (dest);
}
