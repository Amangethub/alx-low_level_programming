#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entery point
 *
 * Return: always 0
 */
int main(void)
{

		int d;

		for (d = 0; d < 100; d++)

		{
			putchar((d / 10) + '0');

			putchar((d % 10) + '0');

			if (d != 99)

			{

				putchar(',');

				putchar(' ');

																						}
		}

		putchar('\n');

		return (0);

}
