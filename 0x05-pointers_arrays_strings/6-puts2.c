#include "main.h"

/**
 * puts2 - prints every other character the string given
 *
 * @str: string of char inputed
 */
void puts2(char *str)
{
	int x = 0;
	int y = 0;

	while (str[x] != '\0')
		x++;
	x -= 1;

	for (; y <= x; y += 2)
		_putchar(str[y]);
	_putchar('\n');
}
