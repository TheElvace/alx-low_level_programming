#include "main.h"

/**
 * _strchr - locates occurence of character in a string
 * @c - character located in string
 * @s - string charcter is loacted in
 * Return: pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if  (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
