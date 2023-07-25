#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, f, k, j, rv1, rv2;

a = f = k = j = 48;
while (j < 58)
{
	k = 48;
	while (k < 58)
	{
		f = 48;
		while (f < 58)
		{
			a = 48;
			while (a < 58)
			{
				rv1 = (j * 10) + k;
				rv2 = (f * 10) + a;
				if (rv1 < rv2)
				{
					putchar(j);
					putchar(k);
					putchar(' ');
					putchar(f);
					putchar(a);
					if (j == 57 && k == 56 && f == 57 && a == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				a++;
			}
			f++;
		}
		k++;
	}
	j++;
}
putchar('\n');
return (0);
}
