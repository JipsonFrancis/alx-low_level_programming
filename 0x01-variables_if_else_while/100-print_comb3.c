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
	int j;
	int Dascii[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (!(i >= j))
			{
				putchar(Dascii[i]);
				putchar(Dascii[j]);

				if (!(i == 8 && j == 9))
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar('\n');
				}
			}
			else
			{
				continue;
			}
		}
	}

	return (0);
}
