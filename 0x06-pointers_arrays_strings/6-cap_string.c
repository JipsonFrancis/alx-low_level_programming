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
	int i, a;
	int t;
	char these[] = ",;.!?(){}\n\t\" ";

	for (i = 0, t = 0; s[i]; i++)
	{
		if (s[i] > 96 && s[i] < 123)
			t = 1;
		for (a = 0; these[a]; a++)
		{
			if (these[a] == s[i])
				t = 1;
		}

		if (t)
		{
			if (s[i] > 96 && s[i] < 123)
			{
				s[i] -= 32;
				t = 0;
			}
			else if (s[i] > 64 && s[i] < 91)
				t = 0;
			else if (s[i] > 47 && s[i] < 58)
				t = 0;
		}
	}
	return (s);
}
