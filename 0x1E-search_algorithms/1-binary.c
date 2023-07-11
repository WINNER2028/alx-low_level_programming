#include "search_algos.h"

/**
* binary_search - a function that searches for a value in a sorted array of
* integers using the Binary search algorithm
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
*
* Return: the first index where value is located, If value is not present in...
* array or if array is NULL, your function must return -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1;
	size_t k;

	if (array == NULL)
		return (-1);

	while (i <= j)
	{
		print_array(i, j, array);
		k = i + ((j - i) / 2);
		if (array[k] == value)
		{
			return (k);
		}
		else if (array[k] < value)
		{
			i = k + 1;
		}
		else
		{
			j = k - 1;
		}
	}
	return (-1);
}

/**
* print_array - prints array in correct output for task
* @start: beginning of array
* @end: end of array
* @array: the array to print
*
* Return: void
*/
void print_array(int start, int end, int *array)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}
