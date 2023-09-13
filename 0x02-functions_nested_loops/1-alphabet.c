#include "main.h"
/**
 * main - description
 * Return: 0 (seccsse)
 */
int print_alphabet()
{
	int alp;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
	return (0);
}
int main(void)
{
	print_alphabet();
	return (0);
}
