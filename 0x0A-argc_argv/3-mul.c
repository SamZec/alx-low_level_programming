#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int mul;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
		mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
