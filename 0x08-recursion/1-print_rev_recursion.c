#include "main.h"
/**
 * _print_rev_recursion-function that prints a string in reverse.
 * @s: checker
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s) 
	{
		_putchar(--*s);
		_putchar(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
