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
	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	for (i = 0; i <= 26; i++)
	{
		putchar(alphabet[i]);
	}

	return (0);
}
