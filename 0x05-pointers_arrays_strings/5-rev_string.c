#include "main.h"

/**
 * rev_string - reverse the string given
 *
 * @s: string of char inputed
 */
void rev_string(char *s)
{
	int x = 0, i = 0;
	char y;

	while (s[x] != '\0')
		x++;
	while (i < x--)
	{
		y = s[i];
		s[i++] = s[x];
		s[x] = y;
	}
}
