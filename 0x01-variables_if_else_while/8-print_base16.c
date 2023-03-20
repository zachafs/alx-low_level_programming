#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int h = 0;

	while (h < 10)
	{
		putchar(h + '0');
		h++;
	}
	h = 0;
	while (h < 6)
	{
		putchar(h + 'a');
		h++;
	}
	putchar('\n');
return (0);
}
