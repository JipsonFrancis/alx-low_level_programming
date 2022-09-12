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
	char digit;

	for (i = 0; i < 10; i++)
	{
		digit = (char) i;

		putchar(digit);
		if (i == 9)
			putchar('\n');
	}

	return (0);
}
