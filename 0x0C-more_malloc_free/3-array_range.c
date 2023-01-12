#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum range
 * @max: maximum range
 *
 * Return: pointer to created array otherwise NULL
 *	if min > max and malloc fails
 */
int *array_range(int min, int max)
{
	int *array;
	int index, num_element;

	if (min > max)
		return (NULL);
	num_element = max - min + 1;
	array = malloc(sizeof(int) * num_element);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < num_element; index++)
		array[index] = min++;
	return (array);
}
