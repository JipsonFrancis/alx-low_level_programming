#include "main.h"
/**
 * _isalpha - check if a character is lower case of not
 *
 * @c : the ascii to check
 *
 *
 * Return: on Success 1, on Fail 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	return (0);
}
