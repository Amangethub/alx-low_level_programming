#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - enetry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x;
	char hi;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (hi = 'A'; hi <= 'F'; hi++)
		putchar(hi);
	putchar('\n');
	return (0);
}
