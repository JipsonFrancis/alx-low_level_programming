#include "main.h"
/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 11)
	{
		while (j < 15)
		{
			_putchar(j + '0');

			j++;
		}
		_putchar(10);
		i++;
	}
}
