#include "main.h"
/**
 * puts2 - prints a string, followed by a new line, to stdout.
 * @str: a string
 * Return: equal to length of a string
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*(str + 2));
	}
	_putchar('\n');
}
