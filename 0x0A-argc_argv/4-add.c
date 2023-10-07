#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int i, sum = 0, n;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			n = atoi(argv[i]);
			if (n == 0)
			{
				printf("Error\n");
				return (0);
			}
			else
				sum = sum + n;
		}
		printf("%d\n", sum);
	}
	return (0);
}
