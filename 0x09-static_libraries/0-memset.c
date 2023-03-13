
#include "main.h"
/**
 * _memset()-function that fills memory with a constant byte
 * @s: checker
 * @b: checker
 * @n: checker
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	for (; n != 0; p++, n--)
		*p = b;
	return (s);
}
