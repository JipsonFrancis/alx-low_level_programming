#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: para 1
 *
 * @s2: para 2
 *
 * Return: negative or positive
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] || s2[i]; i++)
	{
		if (s1[i] != s2[i])
			return (-1);
	}

	return (0);
}
