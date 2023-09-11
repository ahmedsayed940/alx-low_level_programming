#include <stdio.h>
/**
 * main - description
 * Return: 0 (seccsse)
 */
int main(void)
{
	int al;
	int n = 57;

	for (al = 48; al <= 57; al++)
	{
		putchar(al);
		if (al < n)
		{
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar('\n');
			return (0);
		}
	}
	putchar('\n');
	return (0);
}
