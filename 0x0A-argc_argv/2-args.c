#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
