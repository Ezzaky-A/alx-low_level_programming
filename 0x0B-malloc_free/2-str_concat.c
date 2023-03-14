#include "main.h"
#include <stdlib.h>
/**
 * str_concat-function that concatenates two strings
 * @s1: checker
 * @s2: checker
 * Return: Null on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2, s, i, j;
	char *cn;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l1 = 0;
	while (s1[l1] != '\0')
	{
		l1++;
	}
	l2 = 0;
	while (s2[l2] != '\0')
	{
		l2++;
	}
	s = l1 + l2;
	cn = malloc((sizeof(char) * s) + 1);

	if (cr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		cn[i] = s1[i];
	}
	for (j = 0; i < s; i++, j++)
	{
		cn[i] = s2[j];
	}
	return (cr);
}
