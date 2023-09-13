#include "main.h"
/**
 * main - description
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
	return;
}
int main(void)
{
	print_alphabet();
	return (0);
}
