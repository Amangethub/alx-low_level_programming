#include "main.h"
int prime(int num, int div);

/**
 * is_prime_number - checks if the integer given is prime number
 *
 * @n: input integer
 *
 * Return: 1 if n is prime and 0 otherwise
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (prime(n, div));
}

/**
 * prime - checks if a num is divisble
 *
 * @num: number to be checked
 * @div: result of division
 *
 * Return: 1 if n is divisble or 0 if its not
 */
int prime(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (prime(num, div + 1));
}
