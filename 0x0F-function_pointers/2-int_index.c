#include "function_pointers.h"

/**
 *int_index -  a function that searches for an integer
 *@array: an array contained an elemments to search
 *@size: number of elements in an array
 *@cmp: a pointer to the function to be used to compare values
 *Return:  index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (cmp != NULL && array != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}
