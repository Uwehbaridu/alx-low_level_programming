#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for intger.
 * @array: input array
 * @size: number of element
 * @cmp: function pointer.
 *
 * Return: int_index: returns the index of the first element
 * return: do not return 0 If no element matches
 * return -1, If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
