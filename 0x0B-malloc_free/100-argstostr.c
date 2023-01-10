#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: argumet vector
 *
 * Return: pointer to new string otherwise NULL
 */
char *argstostr(int ac, char **av)
{
	char *ptr_av;
	int index, arg, byte, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}
	ptr_av = malloc(sizeof(char) * size + 1);
	if (ptr_av == NULL)
		return (NULL);
	index = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			ptr_av[index++] = av[arg][byte];
		ptr_av[index++] = '\n';
	}
	ptr_av[size] = '\0';
	return (ptr_av);
}
