#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character
 * @c: VALUE of  character
 * Return: 1 or  0 .
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
