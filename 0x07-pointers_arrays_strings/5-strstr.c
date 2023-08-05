#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Daylight School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "world me first";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
