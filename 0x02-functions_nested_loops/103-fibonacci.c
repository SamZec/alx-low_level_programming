#include <stdio.h>

/**
 * main - print sum of even Fibonacci terms
 *
 * Return: 0 (success)
 */
int main(void)
{
	int add, k, j, even;

	add = even = k = 0;
	j = 1;

	while (add <= 4000000)
	{
		add = k + j;
		if (add % 2 == 0)
			even += add;
		k = j;
		j = add;
	}
	printf("%u\n", even);
	return (0);
}
