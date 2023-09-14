#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: character
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
