#include "main.h"
/**
 * _isupper-function that checks for uppercase character.
 * @c:character checker.
 * Return:0-if lowercase,1-something else.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
