#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 48, j = 48, k = 48, l = 48;
	int chek1, chek2;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				l = 48;
				while (l < 58)
				{
					chek1 = (i * 2) + j;
					chek2 = (k * 2) + l;
					if (chek1 < chek2)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (i == 57 && j == 56 && k == 57 && l == 57)
							break;
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
