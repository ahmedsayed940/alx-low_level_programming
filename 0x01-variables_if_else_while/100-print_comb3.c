#include <stdio.h>
/**
 * main - description
 * Return: 0 (seccsse)
 */
int main(void)
{
	int n;
	int a;
	int s = 56;

	for (n = 48 ; n <= 57; n++)
	{
		for (a = 48; a <= 57; ++a)
		{
			if (n >= a)
			{
				continue;
			}
			else
			{
				putchar(n);
				putchar(a);
				if (n < s)
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
		}
	}
}
