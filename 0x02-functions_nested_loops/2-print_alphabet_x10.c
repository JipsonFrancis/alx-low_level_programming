#include "main.h"
/**
 * print_alphabet - no array but prints alpabets easy
 *
 *
 * Return: On success 0.
 *
 */

void print_alphabet_x10(void)
{
	int i;
	int j;
	
	for(int j = 0 ; j <= 10; j++)
	{
		for(int i = 97 ; i <= 122; i++ )
		{
			_putchar(i);
			if (i == 122)
				_putchar(10);
		}
	}
}
