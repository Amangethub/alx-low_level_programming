#include <stdio.h>

/**
 * main - prints out all the arguments passed
 *
 * @argc: argument counter
 * @argv: array of the argument strings
 *
 * Return: Always 0 (Successful)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
