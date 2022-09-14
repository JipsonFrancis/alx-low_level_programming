#include "main.h"
/**
 * jack_bauer - prints all minutes of time
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a < 51; a++)
	{
		for (b = 48; b < 52; b++)
		{
			for (c = 48; c < 54; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar(10);
				}
			}
		}
	}
}
