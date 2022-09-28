#include "main.h"

/**
 * _strlen_recursion - returns the length of the string given
 *
 * @s: string inpu
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
