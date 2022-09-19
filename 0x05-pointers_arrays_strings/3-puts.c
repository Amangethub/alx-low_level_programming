#include "main.h"

/**
 * _puts - prints the string given
 *
 * @str: string of char inputed
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		_putchar(str[x]);
	_puchar('\n');
}
