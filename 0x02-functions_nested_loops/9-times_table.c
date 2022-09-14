#include "main.h"
/**
 * times_table - prints all minutes of time
 *
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;
	int z = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			z = a * b;

			_putchar(z + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
