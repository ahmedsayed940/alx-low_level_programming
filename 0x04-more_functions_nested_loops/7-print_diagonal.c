#include "main.h"
/**
 * print_diagonal - function that draws a straight line in the terminal
 * @n: number of line
 * return: void
 */
void print_diagonal(int n)
{
	int l, j;

	if (n <= 0)
		_putchar('\n');
	for (l = 0; l < n; l++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
