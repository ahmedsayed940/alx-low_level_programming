#include "main.h"
/**
 * main - description
 * Return: 0 (seccsse)
 */
int print_alphabet(int alp)
{
	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
		putchar(alp);
	}
	return;
}
int main(void)
{
	print_alphabet();
	return (0);
}
