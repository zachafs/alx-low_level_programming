#include <stdio.h>


/**
 * main - ite a program that prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;
	
	while (a < 10)
		{
			putchar(' ');
			putchar(a +  '0');
			putchar(',');
			a++;
		}
	putchar('\n');
	return (0);
}