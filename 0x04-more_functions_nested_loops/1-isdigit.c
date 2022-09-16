#include "main.h"
/**
 * _isdigit - check if varaible is digit
 * @c : int type number
 * Return: on success 1 on fail 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
