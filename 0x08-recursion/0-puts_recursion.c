#include "main.h"
/**
 * _puts_recursion-function that prints a string, followed by a new line
 * @s : checker
 * Return: nothing
 */
void _puts_recursion(char *s)
{

	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
