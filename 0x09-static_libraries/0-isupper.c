#include "main.h"

/**
 * _isupper - outputs the upper case letters
 * @c: parameter
 * Return: returns 0 or 1
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
