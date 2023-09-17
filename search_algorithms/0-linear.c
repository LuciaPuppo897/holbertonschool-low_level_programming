#include "searchalgos.h"


#include "sort.h"
/**
* recursive_quick - the recursive function to call
*@array: the array to sort
*@min: the first value on the array
*@max: the last value of the array
*@size: the size of the array
*/
void recursive_quick(int *array, int min, int max, size_t size)
{

	if (min < max)
	{
		int i = min, j, piv = array[max];

		if (!array[min] || !array[max - 1])
			return;

		for (j = min; j < max; j++)
		{
			if (array[j] <= piv)
			{
				swap(&array[i], &array[j], i, j, array, size);
				i++;
			}
		}
			swap(&array[i], &array[max], i, j, array, size);
		recursive_quick(array, min, i - 1, size);
		recursive_quick(array, i + 1, max, size);
	}
}

/**
 * linear_search - searchs in the array ina  linear way
 *@*array: the array to search in 
 *@size: the size of the array
 *value: the value to search for
 *
 */
int linear_search(int *array, size_t size, int value)
{
int i;
for (i = 0)
}
