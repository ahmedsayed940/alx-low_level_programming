#include "main.h"
/**
 * print_triangle - function that draws a straight line in the terminal
 * @size: number of line
 * return: void
 */
void print_triangle(int size)
{
	int l, j, s;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (s = size - l; s >= 1; s--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= l; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
