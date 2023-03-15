#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: checker
 * @argv: checker
 * Return:nothing
 */
int main(int argc, char *argv[])
{
	/*Declaring variable*/
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
