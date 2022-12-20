#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse a string
 * @s: takes the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char hld;


	i = j = 0;
	while(s[j++])
		i++;
	for (j = i - 1; j >= i / 2; j--)
	{
		hld = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = hld;
	}
}
