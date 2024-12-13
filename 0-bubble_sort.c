#include "sort.h"

/**
 * bubble_sort - bubble sorting
 * @array: pointer
 * @size: size
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int tmp = 0;

	if (!array || !size)
		return;
	while (i < size - 1)
	{
		j = 0;
		while ( j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			j++;
		}
		i++;
	}
}
