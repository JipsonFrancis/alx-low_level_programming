#include "main.h"
/**
 * main - programme entry point print _putchar
 *
 *
 * Return: On success 0.
 *
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);

		if (i == 122)
			_putchar(10);
	}

	return (0);
}
