#include "main.h"
/**
 * print_numbers - print the numbers from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
