#include "main.h"
/**
 * print_alphabet - prints all alphabets
 * Return: 1
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
