#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	unsigned long int add, j, k;

	i = add = j = 0;
	k = 1;

	for (i = 0; i <= 49; i++)
	{
		add = j + k;
		printf("%lu", add);
		j = k;
		k = add;
		if (i == 49)
			break;
		printf(", ");
	}
	printf("\n");
	return (0);
}
