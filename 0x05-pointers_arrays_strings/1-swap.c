#include "main.h"
/**
 * swap_int - swap the values of two integers
 * @a: number int type
 * @b: number int type
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
