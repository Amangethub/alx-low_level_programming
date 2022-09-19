#include "main.h"

/**
 * print_rev - prints the string given
 *
 * @s: string of char inputed
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	while (x)
		_putchar(s[--x]);
	_putchar('\n');
}
