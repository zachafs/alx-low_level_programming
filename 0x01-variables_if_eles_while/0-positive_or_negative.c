#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%u is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%u is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%u is negative \n", n);
	}
	return (0);
}
