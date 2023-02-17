#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
	if (c != 'e' && c != 'q')
	{
		putchar(c);
	}
	c++;
}
putchar('\n');
return (0);
}
