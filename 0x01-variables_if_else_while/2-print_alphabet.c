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
	int i;

	for (i = 'a'; i < 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
