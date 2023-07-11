#include "search_algos.h"

/**
* *linear_skip - function that searches for a value in a sorted...
* ...skip list of integers.
* @list: a pointer to the head of the skip list to search in
* @value: value to search for
* Return: a pointer on the first node where value is located...
* ...If value is not present in list or if head is NULL, your...
* ...function must return NULL
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = list;
	size_t zero = 0;

	if (list == NULL)
		return (NULL);

	while (list->n < value)
	{
		zero = list->index;
		if (list->express)
			list = list->express;
		else
			{
				while (list->next)
					list = list->next;
				break;
			}
			printf("Value checked at index [%d] = [%d]\n",
				   (int)list->index, list->n);
	}
	printf("Value found between indexes [%d] and [%d]\n",
		   (int)zero, (int)list->index);
	list = temp;
	while (list->index < zero)
		list = list->next;
	while (list)
	{
		printf("Value checked at index [%d] = [%d]\n",
			   (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
