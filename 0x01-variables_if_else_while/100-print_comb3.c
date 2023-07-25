#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int c;

	for (a = '0'; a < '9'; a++)
	{

	for (c = a + 1; c <= '9'; c++)
	{
	if (c != a)
	{
		putchar(a);
		putchar(c);
	if (a == '8' && c == '9')
	continue;
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
