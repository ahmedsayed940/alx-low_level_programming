#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of line
 * return: void
 */
void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
