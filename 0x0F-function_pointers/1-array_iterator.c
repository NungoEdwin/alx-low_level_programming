#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints each array elementus on new line
 * @array: array under..
 * @size: how many elements to print
 * @action: pointer to print in regular(decimal) or hexadecimal
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

