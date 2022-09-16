#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	a = 0;

	while (n > 0)
	{
		b = a;

		while (b > 0)
		{
			_putchar(' ');
			b--;
		}
		_putchar(92);
		_putchar(10);
		a++;
		n--;
	}

	if (a < 1)
		_putchar(10);
}
