#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked -  that allocates memory using malloc
 * @b: size
 * Return: m
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		return (NULL);
	return (m);
}
