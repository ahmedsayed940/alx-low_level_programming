#include <stdio.h>
/**
 * _strchar - function that locates a character in a strin
 * @s: original string
 * @c: character 
 * Retrun: s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
