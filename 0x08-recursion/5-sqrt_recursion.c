#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - calcuates the natural square root of the given integer
 *
 * @n: input integer
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}
/**
 * _sqrt - finds the square root
 *
 * @prev: previous value
 * @root: the value of the root
 *
 * Return: the sqauare root
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
