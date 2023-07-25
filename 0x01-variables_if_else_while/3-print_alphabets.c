#include <stdio.h>

/**
 * main - Lower and uppercase alphabets
 *
 * Return: Aways 0 (success)
 */

int main(void)
{
int lowercase = 'a';
int uppercase = 'A';
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
		putchar('\n');
	return (0);
}
