#include "main.h"
/**
 * - prints all minutes of time
 *
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			_putchar(a*b);
			_putchar(',');
			_putchar(' ');
		}
	}
}
