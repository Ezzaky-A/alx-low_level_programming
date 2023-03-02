#include "main.h"
/**
 * _strcat-function that concatenates two strings
 * @dest:checker
 * @src:checker
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	for (i = 0; src[i] != '\0'; ++i, ++len)
	{
		dest[len] = *src[i];
	}
	dest[len] = '\0';
	_putchar(dest);
}

