#include <stdio.h>

/**
 * main - print first 98 Fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int j, k, add;
	int i;

	j = add = 0;
	k = 1;

	for (i = 0; i <= 97; i++)
	{
		add = j + k;
		printf("%lu", add);
		j = k;
		k = add;
		if (i == 97)
			break;
		printf(", ");
	}
	printf("\n");
	return (0);
}
