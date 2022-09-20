#include "main.h"
/**
 * rev_string -  reverses a string.
 *
 * @s : pointer to parameter that is passed
 *
 * Return : void
 */
void rev_string(char *s)
{
	int i;

	int a = strlen(s);

	int x[strlen(s)];

	for (i = 0; i < a; i++)
		x[a - (i + 1)] = s[i];

	for (i = 0; i < a; i++)
		s[i] = x[i];

	for (i = 0; s[i]; i++)
		_putchar(s[i]);

	_putchar(10);
}
