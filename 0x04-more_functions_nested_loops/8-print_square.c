#include "main.h"
/**
 * print_square - print a square
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{
	int a, b;

	a = 0;

	if (size < 0)
	{
		_putchar(10);
		return;
	}

	while (a < size)
	{
		b = 0;

		while (b < size)
		{
			_putchar('#');
			b++;
		}

		_putchar(10);
		a++;
	}
}
