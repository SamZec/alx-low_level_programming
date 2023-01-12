#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory
 *	block using malloc and free.
 * @ptr: previous memory
 * @old_size: size for ptr
 * @new_size: size for new memory allocation
 *
 * Return: the new allocated memory space.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *hold, *mover;
	unsigned int index;
	void *memory;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		memory = malloc(new_size);
		if (memory == NULL)
			return (NULL);
		return (memory);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	hold = ptr;
	memory = malloc(sizeof(hold) * new_size);
	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}
	mover = memory;
	for (index = 0; index < old_size && index < new_size; index++)
		mover[index] = *hold++;
	free(ptr);
	return (memory);
}
