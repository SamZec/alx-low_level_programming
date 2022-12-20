#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: takes the string to be converted
 *
 * Return: converted integer 0 otherwise
 */
int _atoi(char *s)
{
	int charg = 1;
	unsigned int aba = 0;

	do {
		if (*s == '-')
			charg *= -1;
		else if (*s >= '0' && *s <= '9')
			aba = (aba * 10) + (*s - '0');
		else if (aba > 0)
			break;
	} while (*s++);
	return (aba * charg);
}
