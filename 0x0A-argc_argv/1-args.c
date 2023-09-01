#include <stdio.h>
#include "main.h"

/**
 * main - this prints the number of arguments passed to the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Success 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
