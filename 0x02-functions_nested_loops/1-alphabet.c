#include "main.h"
/**
 * print_alphabet - print the alpabet in lowercase
 * Return: 0 (seccsse)
 */
void print_alphabet(void)
{
	int alp;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
