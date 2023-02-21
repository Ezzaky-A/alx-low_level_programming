#include "main.h"

/**
 * _isalpha- check if character is lowercase or uppercase.
 * @c:character checker.
 * Return:0-if lowercase/uppercase,1-something else.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
