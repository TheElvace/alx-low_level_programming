#include "main.h"

/**
 * _memcpy() - copies @n bytes from memory area
 * @n - the function that is copied
 * @src - the memory area @n is copied from
 * @dest - the memory area @n is copied to
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	
	return (dest);
}
