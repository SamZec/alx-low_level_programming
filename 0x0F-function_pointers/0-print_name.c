#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: name argument
 * @f: pointer to funtion
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
