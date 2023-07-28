#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int count = 0, a, l;

	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (a = 0; a < (count - 1); a++)
	{
		for (l = a + 1; l > 0; l--)
		{
			temp = *(str + l);
			*(str + l) = *(str + (l - 1));
			*(str + (l - 1)) = temp;
		}
	}
}
