#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s = 0, e = 9;

	while (s <= 0)
	{
		putchar(s + '0');
		s++;
	}
	putchar('\n');
	return (0);
}
