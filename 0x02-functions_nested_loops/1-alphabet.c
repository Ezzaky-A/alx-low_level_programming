#include <main.h>
/**
 *
 * print_alphabet - Entry point 
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char a='a';

	while(a <= 'z')
	{
		_putchar(a);
		a++;
	}
	putchar('\n');
}
