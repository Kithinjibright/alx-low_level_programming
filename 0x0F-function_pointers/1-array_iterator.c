#include "function_pointers.h"

/**
 * array_iterator - executes function given as a parameter on each element of an array
 * @array: array of integers
 * @size: array size
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = o;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
