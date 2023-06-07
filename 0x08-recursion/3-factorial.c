#include "main.h"
/**
 * factorial-function thet returns the factorial of a givennumbe
 * @n: checker
 * Return: nothing
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
