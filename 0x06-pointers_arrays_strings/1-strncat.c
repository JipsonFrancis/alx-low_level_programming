#include "main.h"
/**
 * _strncat - concatenate two strings
 *
 * @dest: char string to concatenate to
 *
 * @src: char string
 *
 * @n: number of elements to concatenate
 *
 * Return: pointer to resulting string `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, a;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (a = 0; src[a] != '\0' && n > 0; a++, n--, i++)
	{
		dest[i] = src[a];
	}

	return (dest);
}
