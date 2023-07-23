#include <stdio.h>
#include <ctype.h>

/**
 * main - a prgram that prints lowercase and uppercase alphabets
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase += 1;
	}
		putchar('\n');
	return (0);
}
