#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: num of bytes
 * Return:  concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, r, h;
	char *a;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	i = 0;
	h = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[h] != '\0')
		h++;
	a = malloc(sizeof(char) * (i + n + 1));
	if (a == NULL)
		return (NULL);
	i = 0;
	for (r = 0; s1[i]; r++)
	{
		a[r] = s1[i];
		i++;
	}
	h = 0;
	for (r; s2[h]; r++)
	{
		if (h == n)
		{
			a[r] = s2[h];
			a[r + 1] = '\0';
			return (a);
		}
		a[r] = s2[h];
		h++;
	}
}
