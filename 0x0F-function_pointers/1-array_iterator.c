#include "function_pointers.h"
/**
 * array_iterator - execute a function given as parm on arr elem.
 * @array: array of interger
 * @size: size of array
 * @action: pointer toa function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NUL)
		return;
	for (n = 0; n < size; n++)
		action(array[n]);
}
