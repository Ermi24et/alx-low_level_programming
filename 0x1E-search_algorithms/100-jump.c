#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in a sorted array of integers using the jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where the value is located
 */

int jump_search(int *array, size_t size, int value)
{
    size_t step, i, l = 0;

    if (array == NULL)
        return (-1);
    step = sqrt(size);
    for (i = l; l < size && array[l] < value;)
    {
        printf("Value checked array[%ld] = [%d]\n", l, array[l]);
        i = l;
        l += step;
    }
    printf("Value found between indexes [%ld] and [%ld]\n", i, l);
    l = fmin(l, size - 1);
    for (; i < l && array[i] < value; i++)
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
    printf("Value checked array[%ld] = [%d]\n", i, array[i]);

    if (array[i] == value)
        return ((int)i);
    else
        return (-1);
}