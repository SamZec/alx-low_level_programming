#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - a function that executes a function given
 *	 as a parameter on each element of an array.
 * @array: array of intergers
 * @size: size of array
 * @action: pointer to funtion
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
