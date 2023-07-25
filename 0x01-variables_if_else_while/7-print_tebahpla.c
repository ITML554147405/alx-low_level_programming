#include <stdio.h>

/**
 * main - Prints reversed alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	for (b = 122; b > 96; b--)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
