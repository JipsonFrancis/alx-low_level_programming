#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s : pointer to parameter that is passed
 *
 * Return : void
 */
void print_rev(char *s)
{
	int i;

	int a = 0;

	for (i = 0; s[i]; i++)
		a++;

	for (i = a - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar(10);
}
