#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 48, j = 48, h = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			h = 48;
			while (h < 58)
			{
				if ((i != j && i != h && j != h) && (i < j && j < h))
				{
					putchar(i);
					putchar(j);
					putchar(h);
					if (j == 56 && i == 55 && h == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				h++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
