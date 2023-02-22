#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			if (a <= 9)
			{
				_putchar('0');
				_putchar(a + '0');
				_putchar(':');
				_putchar(b + '0');
				_putchar('\n');
			}
			else if (b <= 9)
			{
				_putchar(a + '0');
				_putchar(':');
				_putchar('0');
				_putchar(b + '0');
				_putchar('\n');
			}
			else
			{
				_putchar(a);
				_putchar(':');
				_putchar(b);
				_putchar('\n');
			}
		}
	}
}
