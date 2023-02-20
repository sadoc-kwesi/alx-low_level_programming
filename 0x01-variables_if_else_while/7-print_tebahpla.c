#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s = 97, e = 122;

	while (e >= s)
	{
		putchar(e);
		e++;
	}

	putchar('\n');
	return (0);
}
