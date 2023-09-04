#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies string given as parameter
 * @str: string to duplicate
 * Return: pointer to the string for success or NULL for error
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int j, len;

	j = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[j] = str[j]) != '\0')
		j++;

	return (dup);
}
