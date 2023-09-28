#include "main.h"
/**
 * factorial _ function that returns the factorial of a given number
 * @n: number
 * Return: returns the factorial of a given number n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
