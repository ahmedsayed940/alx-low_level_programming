#include "main.h"
/**
 * sps - hondal function
 * @n: the number
 * @i: the devided number
 * Return: 0 or 1
 */
int sps(int n, int i)
{
	int y = n % i;

	if (i == 1)
		return (1);
	if (y == 0)
		return (0);
	return (sps(n, i - 1));
}
/**
 * is_prime_number - function that returns 1 or 0
 * @n: the number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int y;

	if (n <= 1)
		return (0);
	y = sps(n, n / 2);
	return (y);
}
