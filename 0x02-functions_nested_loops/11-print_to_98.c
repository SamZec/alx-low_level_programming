#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print natural numbers to 98
 * @n: takes the starting parameter
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
				break;
			printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n; n >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
				break;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		printf("%d\n", n);
	}
}
