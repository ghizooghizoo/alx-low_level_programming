#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the position of the value
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, l = 0, r = size - 1;

	if (!array)
		return (-1);
	while (l <= r)
	{
		int m = (l + r) / 2;

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i == r)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			r = m - 1;
		if (array[m] < value)
			l = m + 1;
	}
	return (-1);
}
