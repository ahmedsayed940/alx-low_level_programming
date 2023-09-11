#include <stdio.h>
/**
 * main - description
 * Return: 0 (seccsse)
 */
int main(void)
{
	int n;
	int d;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (d = 'a'; d <= 'f'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
