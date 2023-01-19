#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - a function that searches for an integer.
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to a compare integer funtion
 *
 * Return: returns the index of the first element
 *	for which the cmp function does not return 0
 *	otherwise -1 if no element match or size <=0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
