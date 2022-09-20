#include "main.h"
/**
 * _strlen - function that returns the length of a string
 *
 * @s : pointer to parameter that is passed
 *
 * Return: The length of a string
 */

int _strlen(char *s)
{
	int i;

	int a = 0;

	for (i = 0; s[i]; i++)
		a++;

	return (a);
}

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

	for (i = 0; s[i]; i++)
		_putchar(s[i]);

	_putchar(10);
}
