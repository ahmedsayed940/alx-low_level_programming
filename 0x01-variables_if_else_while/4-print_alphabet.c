#include <stdio.h>
/**
 * main - description
 * Return: 0 (seccsse)
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al == 'e' || al == 'q')
		{
			continue;
		}
		putchar(al);
	}
	putchar('\n');
	return (0);
}
