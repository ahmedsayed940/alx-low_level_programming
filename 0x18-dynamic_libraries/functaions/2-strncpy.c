#include "main.h"
/**
 * _strncpy - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: the number of byets
 * Return: the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i =  0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
