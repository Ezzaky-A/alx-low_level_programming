#include "main.h"
/**
 * _strlen-function that returns the length of a string
 * @s:checker
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		s++;
		n++;
	}
	return (n);
}
