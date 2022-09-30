#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies the arguments give after the function name
 *
 * @argc: argument counter
 * @argv: array of the argument strings
 *
 * Return: Always 0 (Successful) or return Error if argc is 1
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
	}
	return (mul);
	printf("\n");
}
