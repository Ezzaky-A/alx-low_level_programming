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
				printf("0%d", a);
				printf(":");
				printf("%d", b);
				printf("\n");
			}
			else if (b <= 9)
			{
				printf("%d", a);
				printf(":");
				printf("0%d", b);
				printf("\n");
			}
			else
			{
				printf("%d", a);
				printf(":");
				printf("%d", b);
				printf("\n");
			}
		}
	}
}
