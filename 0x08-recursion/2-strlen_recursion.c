#include "main.h"
/**
 * _strlen_recursion-function that returns the length of a string.
 * @s: checker
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
