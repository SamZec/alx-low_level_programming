#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for
 *		an array, using malloc.
 * @nmemb: number of elements
 * @size: size of array
 *
 * Return: pointer to the memory allocated otherwise NULL
 *	if size or nmemb is 0 and fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int index;
	void *array;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ptr = array;
	for (index = 0; index < (size * nmemb); index++)
		ptr[index] = '\0';
	return (ptr);
}
