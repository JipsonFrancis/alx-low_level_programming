#include "main.h"
/**
 * _islower - check if a character is lower case of not
 *
 * @c : the ascii to check
 *
 *
 * Return: on Success 1, on Fail 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
