#include <stdio.h>
/**
 * _memset - function that fills memory with a constant byte
 * @s: string address of momery
 * @b: value to be filled
 * @n: number of bytes to be filled string from s
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;
	return (s);
}
