#include "main.h"
#include <stdio.h>
/**
 * print_array - print $n elements of an array of integers
 *
 * @a: int type array pointer
 *
 * @n: int type integer
 *
 * $Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (n - 1; n >= 0; i++)
	{
		printf("%d", a[i]);

		if (n > 0)
			printf(", ");
	}
	printf("\n");
}
