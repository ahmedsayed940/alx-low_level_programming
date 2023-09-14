#include <stdio.h>
/**
 * main - first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	int j = 1;
	int f = 2;
	int a = j + f;

	for (i = 0; i <= 49; i++)
	{
		printf("%d, ", a);
		j = f;
		f = a;
		a = f + j;
	}
	printf("\n");
}
