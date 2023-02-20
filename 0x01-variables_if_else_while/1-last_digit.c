#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the 5, less than 6, or 0.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of %d is %d ", n, m);
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",	n, m);
	}
	printf("\n");
	return (0);
}

