#include <stdio.h>

/**
 * main - print sum of even Fibonacci terms
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int add, k, j, even;
	int i;

	add = even = k = 0;
	j = 1;

	for (i = 0; i <= 4000000; i++)
	{
		add = k + j;
		if (add % 2 == 0)
			even += add;
		k = j;
		j = add;
	}
	printf("%lu\n", even);
	return (0);
}
