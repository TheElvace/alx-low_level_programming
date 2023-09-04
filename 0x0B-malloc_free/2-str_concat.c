#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - this concatenates two strings
 * @s1: the string to concatenate
 * @s2: second string to concatenate
 * Return: pointer to new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int m = 0, n = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	m = 0;
	n = 0;

	if (s1)
	{
		while (m < len1)
		{
			s3[m] = s1[m];
			m++;
		}
	}

	if (s2)
	{
		while (m < (len1 + len2))
		{
			s3[m] = s2[n];
			m++;
			n++;
		}
	}
	s3[m] = '\0';

	return (s3);
}
