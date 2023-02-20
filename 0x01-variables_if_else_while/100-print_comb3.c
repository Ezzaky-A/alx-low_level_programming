#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 <= 8; n1++)
	{
		for (n2 = 1; n2 <= 9; n2++)
		{
			if (n1 != n2 && n1 < n2)
			{
				putchar('0' + n1);
				putchar('0' + n2);
				if (n2 < 9 || n1 < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
