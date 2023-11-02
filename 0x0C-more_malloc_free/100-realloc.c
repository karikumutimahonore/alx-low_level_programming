#include "main.h"
#include <stdlib.h>

/**
 * \*_realloc - function that reallocates a memory block.
 * @ptr: A pointer to the memory.
 * @old_size: The size in bytes for old memory block
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;
	char *ptr_copy, *filler;
	unsigned int k;

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

	ptr_copy = ptr;
	memory = malloc(sizeof(*ptr_copy) * new_size);

	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = memory;

	for (k = 0; k < old_size && k < new_size; k++)
		filler[k] = *ptr_copy++;

	free(ptr);
	return (memory);
}
