#include "main.h"
/**
 * rot13 - A function that encodes a string using rot13.
 * @s: a variable that can access the string.
 * Return: string output;
 */
char *rot13(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'z') ||
			(s[i] >= 'A' && s[i] <= 'Z'))
		{
			while ((s[i] >= 'a' && s[i] <= 'm') ||
				(s[i] >= 'A' && s[i] <= 'M'))
			{
				s[i] += 13;
				i++;
			}
			while ((s[i] >= 'n' && s[i] <= 'z') ||
				(s[i] >= 'N' && s[i] <= 'Z'))
			{
				s[i] -= 13;
				i++;
			}
		}
		else
		{
			i++;
		}
	}
	return (s);
}
