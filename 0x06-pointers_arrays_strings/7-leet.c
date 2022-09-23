#include "main.h"
/**
 * leet - encode a string to 1337
 * @str: string
 * Return: The string is returned once changed to leet.
 */
char *leet(char *str)
{
	int a, b;
	char letter[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	a = 0;

	while (str[a] != '\0')
	{
		b = 0;

		while (letter[b] != '\0')
		{
			if (str[a] == letter[b])
				str[a] = replace[b];
			b++;
		}
		a++;
	}
	return (str);
}
