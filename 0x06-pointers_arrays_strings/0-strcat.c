#include "main.h"
/**
 * _strcat - concatenate two strings
 *
 * @dest: char string to concatenate to
 *
 * @src: char string
 *
 * Return: pointer to resulting string `dest`
 */
char *_strcat(char *dest, char *src)
{
	int i, a;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[i] = src[a];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
