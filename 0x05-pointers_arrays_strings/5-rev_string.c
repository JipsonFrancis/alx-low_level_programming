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
	int i = 0;
	int j = 0;
	int a = 0;

	for (i = 0; s[i]; i++)
		a++;

	for (i = 0; i < (a / 2); i++)
	{
		j = s[i];
		s[i] = s[a - i - 1];
		s[a - i - 1] = j;
	}

	for (i = 0; s[i]; i++)
		_putchar(s[i]);
}
