#include <stdio.h>
#include "main.h"

/**
 * main - this prints all the arguments it receives
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Success is 0
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}

	return (0);
}
