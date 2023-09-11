#include <stdio.h>
/**
 * main - description
 * Return: 0 (seccsse)
 */
int main(void)
{
	char al;
	char ch;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
