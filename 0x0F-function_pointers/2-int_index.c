#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function given as parameter on element of array.
 * @size: size of the array
 * @action: function pointer
 * @array: input integer.
 *
 * Return - No return.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}

