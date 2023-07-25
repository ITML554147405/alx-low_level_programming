#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, f, k;

	a = 48;
	f = 48;
	k = 48;

	while (f < 58)
	{
		a = 48;
		while (a < 58)
		{
			k = 48;
			while (k < 58)
			{
				if (f != a && f != k && a != k && f < a && a < k)
				{
					putchar(f);
					putchar(a);
					putchar(k);
					if (a == 56 && f == 55 && k == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			a++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
