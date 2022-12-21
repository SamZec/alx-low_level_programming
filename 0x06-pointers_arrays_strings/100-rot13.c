#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: takes the string
 *
 * Return: encoded rot13
 */
char *rot13(char *str)
{
	int i = 0;
	int j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot13key[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
