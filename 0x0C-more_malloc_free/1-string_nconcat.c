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
	unsigned int i, r = 0, h;
	char *a;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	i = 0;
	h = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[h] != '\0')
		h++;
	if (n < h)
		a = malloc(sizeof(char) * (i + n + 1));
	else
		a = malloc(sizeof(char) * (i + h + 1));
	if (a == NULL)
		return (NULL);
	while (r < i)
	{
		a[r] = s1[r];
		r++;
	}
	while (n < h && r < (i + n))
	{
		a[r] = s2[r];
		r++;
	}
	while (n >= h && r < (i + h))
		a[i++] = s2[j++];
	a[r] = '\0';
	return (a);
}
