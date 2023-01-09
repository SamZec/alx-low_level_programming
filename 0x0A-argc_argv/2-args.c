#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
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
