#include <stdio.h>
#include "main.h"

/**
 * _isupper - A function that checks the uppercase status of a character
 *
 * @c: an input character
 * Return: 1 if c is upper case or 0 otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);

}
