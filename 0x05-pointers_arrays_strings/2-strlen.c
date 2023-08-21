#include "main.h"
/**
 * _strlen - this returns the length of a string
 * Author - Elvis
 * @s: char to check
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
