#include "main.h"

/**
 * _memset - this function fills the first @n bytes of the memory area
 * that is pointed to by @s with the constant byte @b
 *
 * @n: the bytes of the memory area pointed to by @s
 * @s: the constant byte @b
 * @b: the memory area pointer
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
