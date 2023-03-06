#include "main.h"
/**
 * _strspn-function that searches a string for any of a set of bytes.
 * @s: checker
 * @accept: checker
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, x, i;

	for (x = 0; s[x] != '\0' && x == count; x++)
		for (i = 0; accept[i] != '\0'; i++)
			if (s[x] == accept[i])
				count++;

	return (count);
}
