#include "main.h"
/**
 * _pow_recursion -  function that returns the valueof x raised tothe powerof y
 * @x: beas
 * @y: pwor
 * Return: returns the valueof x raised tothe powerof y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
