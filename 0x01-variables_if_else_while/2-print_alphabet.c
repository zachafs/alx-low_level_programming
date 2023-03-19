#include <stdio.h>
/**
 * main - Prints the lowercase alphabet using a while loop and putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
	putchar(c);
	c++;
}
	putchar('\n');
return (0);
}
