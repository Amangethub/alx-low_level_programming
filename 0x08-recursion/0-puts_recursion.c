#include "main.h"

/**
 * _puts_recursion - prints out the string given
 *
 * @s: input string
 *
 * Retrun: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
