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

	int a = _strlen(s);

	int x[a];

	for (i = 0; i < a; i++)
		x[a - (i + 1)] = s[i];

	for (i = 0; i < a; i++)
		s[i] = x[i];

	_strlen(s);
}
