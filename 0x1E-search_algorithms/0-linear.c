#include "search_algos.h"

/**
* linear_search - function that searches for a value in an array of...
* ...integers using the Linear search algorithm
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
*
* Return: the first index where value is located, If value is not present in...
* array or if array is NULL, your function must return -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t g;

	if (array == NULL)
		return (-1);

	for (g = 0; g < size; g++)
	{
		printf("Value checked array[%lg] = [%lg]\n",
			(long int)g, (long int)array[g]);
		if (array[g] == value)
			return (g);
	}
	return (-1);
}
