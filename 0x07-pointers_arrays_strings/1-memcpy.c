#include "main.h"

/**
 * _memcpy - copies @n bytes from memory area @src
 * to memory area @dest
 *
 * @dest: Pointer to the destination array where the content is to be copied.
 * @src: Pointer to the source of data to be copied.
 * @n: Number of bytes to copy.
 * @return A pointer to the destination array `dest`.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
