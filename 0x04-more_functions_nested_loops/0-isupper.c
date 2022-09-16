#include "main.h"
/**
 * _isupper - check if char is uppercase
 * @c : int type number
 * Return: on success 1 on fail 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
