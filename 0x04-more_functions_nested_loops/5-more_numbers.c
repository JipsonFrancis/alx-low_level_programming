#include "main.h"
/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
				_putchar(j / 10 + '0');

			_putchar(j % 10 + '0');

			j++;
		}

		i++;
		_putchar(10);
	}
}
