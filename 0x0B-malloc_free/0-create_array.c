#include "main.h"
#include <stdlib.h>
/**
 * create_array-creates an array of chars
 * @size:checker
 * @c:checker
 * Return: size
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(c));

	if (array == NULL)
	{
		return (NULL);
	}
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
