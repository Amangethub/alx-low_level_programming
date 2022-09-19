#include "main.h"

/**
 * swap_int - swaps the values of the integers given
 *
 * @a: input integer
 * @b: input integer
 *
 * Return: the values of the integers swaped
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *b;
	y = *a;
	*a = x;
	*b = y;
}
