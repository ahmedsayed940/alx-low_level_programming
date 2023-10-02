#include "main.h"
/**
 * _isalpha - checks for alphabetic characte
 * @c: is ASCII code
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
