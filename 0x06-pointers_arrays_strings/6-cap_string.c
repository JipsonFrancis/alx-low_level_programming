#include "main.h"
/**
 * cap_string - capitalize all words of a string
 *
 * @s: string
 *
 * Return: string s
 */
char *cap_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= 32;
			}

			if (s[i - 1] == 32 || s[i - 1] == '\t' ||
				s[i - 1] == '\n' || s[i - 1] == ',' ||
				s[i - 1] == ';' || s[i - 1] == '.' ||
				s[i - 1] == '!' || s[i - 1] == '?' ||
				s[i - 1] == '"' || s[i - 1] == '(' ||
				s[i - 1] == ')' || s[i - 1] == '{' ||
				s[i - 1] == '}')
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
