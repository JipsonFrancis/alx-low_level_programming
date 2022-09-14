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

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			_putchar(a*b);
			_putchar(',');
			_putchar(' ');
		}
	}
}
