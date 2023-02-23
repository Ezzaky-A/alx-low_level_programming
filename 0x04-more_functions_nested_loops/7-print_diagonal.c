#include  "main.h"
/**
 * print_diagonal-function that draws a diagonal line on the terminal.
 * @n:int
 */
void print_diagonal(int n)
{
	int i, n, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
}
