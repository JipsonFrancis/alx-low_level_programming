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
