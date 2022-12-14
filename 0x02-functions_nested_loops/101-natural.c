#include "main.h"
#include <stdio.h>

/**
 * main - prints multiples of 3 and 5
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
