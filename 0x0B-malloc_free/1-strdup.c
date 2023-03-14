#include "main.h"
#include <stdlib.h>
/**
 * _strdup-function that returns a pointer to newly alloced
 * @str: checker
 * Return: null if str == null
 */
char *_strdup(char *str)
{
	char *c;
	unsigned int i, l;

	if (str == NULL)
	{
		return (NULL);
	}
	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	c = malloc((l + 1) * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= l; i++)
	{
		c[i] = str[i];
	}
	c[l] = '\0';
	return (c);
}
