#include "main.h"
/**
 * puts2 - prints every other character of a string.
 *
 * @str : pointer to parameter that is passed
 *
 * Return : void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
}
