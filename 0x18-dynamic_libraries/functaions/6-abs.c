#include "main.h"
/**
 * _abs - the absolute value of an integer
 * @i: number
 * Return: 0 or 1
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
