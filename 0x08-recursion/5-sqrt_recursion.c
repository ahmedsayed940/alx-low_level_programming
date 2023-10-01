#include "main.h"
/**
 * sps - surrounding perfect square
 * @n: the number
 * @i: sps
 * Return: i
 */
int sps(int n, int i)
{
	int square;

	square = i * i;
	if (square > n)
		return (i - 1);
	return (sps(n, i + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the numer
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	int y;

	y = sps(n, 0);
	y = ((n / y) + y) / 2;
	if (y * y == n)
		return (y);
	else
		return (-1);
}
