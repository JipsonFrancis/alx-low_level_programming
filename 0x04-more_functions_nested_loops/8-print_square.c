#include "main.h"
/**
 * print_square - print a square
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{
	int a, b;

	if (size < 0)
	{
		_putchar(10);
		return;
	}

	for (a = 0 ; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}

		_putchar(10);
	}
}
