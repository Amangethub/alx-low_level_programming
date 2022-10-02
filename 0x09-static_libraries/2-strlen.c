#include "main.h"

/**
 * _strlen - measures the lengeth of a string
 *
 * @s: string of characters inputed
 *
 * Return: lengeth of the string
 */
int _strlen(char *s)
{
	int x, y;

	y = 0;

	for (x = 0; s[x] != '\0'; x++)
		y++;

	return (y);
}
