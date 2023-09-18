#include "main.h"
/**
 * _strlen -return the length of a string
 * @s: length of a string
 * Return: equal to length of a string
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		s++;
		n++;
	}
	return (n);
}
