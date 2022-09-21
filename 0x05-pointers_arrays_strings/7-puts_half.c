#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str : pointer to parameter that is passed
 *
 * Return : void
 */
void puts_half(char *str)
{
	int i;

	int size = 0;

	for (i = 0; str[i]; i++)
		size++;

	if (size % 2 == 0)
	{
		for (i = (size / 2); str[i]; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = ((size - 1) / 2); str[i]; i++)
			_putchar(str[i]);
	}

	_putchar(10);
}
