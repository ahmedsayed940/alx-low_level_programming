#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
 */
int main(void)
{
	char *c;

	c = string_nconcat("Best ", "school !!!", 6);
	printf("%s\n", c);
	free(c);
	return (0);
}
