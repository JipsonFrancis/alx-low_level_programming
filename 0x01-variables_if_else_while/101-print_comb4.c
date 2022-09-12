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
	int k;
	int Dascii[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (!(i >= j) && !(j >= k))
				{
					putchar(Dascii[i]);
					putchar(Dascii[j]);

					if (!(i == 7 && j == 8 && k == 9))
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
	}

	return (0);
}
