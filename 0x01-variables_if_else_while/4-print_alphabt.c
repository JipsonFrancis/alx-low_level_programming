#include <stdio.h>
/**
 *main - entry point for programe
 *
 *
 *Return: 0
 */
int main(void)
{
	int i;
	char a[] = {'a', 'b', 'c', 'd', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\n'};

	for (i = 0; i < 25; i++)
	{
		putchar(a[i]);
	}

	return (0);
}
