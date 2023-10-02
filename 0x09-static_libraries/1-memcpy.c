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
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
