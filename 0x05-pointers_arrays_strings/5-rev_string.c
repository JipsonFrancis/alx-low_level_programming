#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s : pointer to parameter that is passed
 *
 * Return : void
 */
void rev_string(char *s)
{
	int i;

	int a = 0;

	for (i = 0; s[i]; i++)
		a++;

	for (i = a - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar(10);
}
