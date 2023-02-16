#include <stdio.h>
/**
  * main - this prints hello
  * Return: This returns 0
  */
int main(void)
{
int i;
char a;
long int c;
long long int h;
float l;
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a char: %lu byte(s)\n", sizeof(a));
printf("Size of a long int: %lu byte(s)\n", sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", sizeof(h));
printf("Size of a float: %lu byte(s)\n", sizeof(l));
return (0);
}
