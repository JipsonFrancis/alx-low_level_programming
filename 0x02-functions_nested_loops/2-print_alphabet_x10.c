#include "main.h"
/**
 * print_alphabet_x10 - no array but prints alpabets easy
 *
 *
 * Return: On success void
 *
 */

void print_alphabet_x10(void)
{
	int i;
	int j;
	char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		    'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}

	for (j = 0 ; j <= 10; j++)
	{
		for (i = 0 ; i <= 26; i++)
		{
			_putchar(a[i]);
			if (i == 26)
				_putchar('\n');
		}
	}
}
