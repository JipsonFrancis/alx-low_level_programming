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
	int i, a, aa;

	i = 0;
	a = 0;
	aa = 0;

	while (s1[a] != '\0')
		a++;
	while (s2[aa] != '\0')
		aa++;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (a > aa)
		return (s1[aa]);
	else if (a < aa)
		return (s2[a] * -1);

	return (0);
}
