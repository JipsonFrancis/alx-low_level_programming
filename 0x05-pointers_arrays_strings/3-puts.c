#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str : pointer to parameter that is passed
 *
 * Return : void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
