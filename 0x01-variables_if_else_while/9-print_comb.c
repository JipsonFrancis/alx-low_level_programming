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
	int Dascii[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

	for (i = 0; i < 10; i++)
	{
		putchar(Dascii[i]);
		if (i == 9)
		{
			putchar('\n');
			break;
		}
		putchar(' ');
		putchar(',');
	}

	return (0);
}
