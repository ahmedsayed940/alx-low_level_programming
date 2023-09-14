#include "main.h"
/**
 * print_square - function that draws a straight line in the terminal
 * @size: number of line
 * return: void
 */
void print_square(int size)
{
	int l, j;

	if (size <= 0)
		_putchar('\n');
	for (l = 0; l < size; l++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
