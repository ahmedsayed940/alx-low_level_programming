#include "main.h"
/**
 * print_last_digit - print_last_digit
 * @n: number 
 * Return: last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
