#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s = 0, e = 9;

	while (s <= e)
	{
		putchar(s + '0');
		s++;
	}

	putchar('\n');
	return (0);
}
