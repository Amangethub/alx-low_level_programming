#include <stdio.h>

/**
 * main - prints out the number of arguments passed to the function
 *
 * @argc: argument counter
 * @argv: array of the argument strings
 *
 * Return: Always 0 (Successful)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
