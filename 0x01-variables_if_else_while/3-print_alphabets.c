#include <stdio.h>
/**
 * main - Prints the lowercase and Upercase alphabet using a while loop and putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c = 'a';
c = 'a' - 'A';

while (c <= 'z')
{
        putchar(c);
        c++;
}
while (c <= 'A')
{
	putchar(c);
		c++;
}
putchar('\n');
return (0);
}
