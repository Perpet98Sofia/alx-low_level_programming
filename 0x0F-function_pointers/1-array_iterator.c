#include "function_pointers.h"

/**
 *array_iterator - executes a function given as a parameter on each element of an array
 *@array: array to be targeted
 *@size: size of array
 *@action: function to be executed
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}
