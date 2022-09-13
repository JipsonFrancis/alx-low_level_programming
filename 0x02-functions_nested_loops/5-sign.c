#include "main.h"
/**
 * print_sign - check if a numbers sign
 *
 * @n : the number to check
 *
 *
 * Return: on postive 1, xero  0, negaive -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
