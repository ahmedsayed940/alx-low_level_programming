#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: 0 (seccsse)
 */
void print_alphabet_x10(void)
{
	int al;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (al = 'a' ; al <= 'z' ; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
