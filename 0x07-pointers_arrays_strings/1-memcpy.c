#include <stdio.h>
/**
 * _memcpy - function that copies memory area
 * @dest: a pointer to the memory location where the copied data will be stored
 * @src: a poiter to the memory location from where the data will be copied
 * @n: the number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	for (int i = 0; i < n; i++)
	{
		d[i] = s[i];
	}
	return (dest);
}
