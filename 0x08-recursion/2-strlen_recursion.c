#include "main.h"
/**
 * _strlen_recursion - function that returns length of string
 * @s:the string
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);

	}
	return (i);
}
