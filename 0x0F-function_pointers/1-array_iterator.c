#include "function_pointers.h"

/**
 * array_iterator - executes a fct on each elt of an array.
 *
 * @array: array
 * @size: size of array
 * @action: fct to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
