#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, last_figure;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_figure = n % 10;

	if (last_figure > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_figure);
	}
	else if (last_figure == 0)
	{
		printf("Last digit of %d is %d adn is 0\n", n, last_figure);
	}
	else if (last_figure < 6 && last_figure != 0)
	{
		printf("Last didgit of %d is %d and is less than 6 and not 0\n", n, last_figure);
	}
	return (0);
}
