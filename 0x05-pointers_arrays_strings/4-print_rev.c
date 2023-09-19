#include "main.h"
/**
 * print_rev - prints a string, followed by a new line, to stdout.
 * @s: a string
 * Return: equal to length of a string
 */
void print_rev(char *s)
{
	int n = 0;
	int i;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	s--;
	for (i = n; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
