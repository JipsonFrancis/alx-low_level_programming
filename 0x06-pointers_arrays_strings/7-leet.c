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
	char replace = "4433007711";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; letter[b] != '\0'; b++)
		{
			if (str[i] == letter[b])
				str[i] = replace[b];
		}
	}
	return (str);
}
